```
def valid_date(date):
    parts = date.split("-")
    day, month, _ = map(int, parts[:2])
    year = int(parts[-1]) if len(parts) > 2 else None
    
    if year is not None and (year < 1 or year > 9999):
        return False
    elif (month < 1 or month > 12) or ((day < 1 or day > 31) if month in [1, 3, 5, 7, 8, 10, 12] else 
                                         ((day < 1 or day > 30) if month == 2 and year % 4 != 0 else (day < 1 or day > 29))):
        return False
    
    return True