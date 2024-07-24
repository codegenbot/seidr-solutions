def valid_date(date):
    parts = date.split("-")
    day, month = map(int, parts[:2])
    year = int(parts[-1]) if len(parts) > 2 else None
    
    if len(parts) != 3:
        return False
    if year and (len(str(year)) != 4 or not str(year).isdigit()):
        return False
    if day < 1 or day > 31:
        return False
    if month < 1 or month > 12:
        return False
    
    return True