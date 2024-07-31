def valid_date(date):
    parts = date.split('-')
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    
    if len(parts) != 3 or any(not part.isdigit() for part in parts):
        return False
    
    if not (1 <= month <= 12 and 1 <= day <= 31 and 1000 <= year <= 9999):
        return False
    
    if month in [4,6,9,11] and day > 30:
        return False
    if month == 2 and day > 29:
        return not (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0))
    
    return True