```
def valid_date(date):
    parts = date.split('-')
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    
    if len(parts) != 3 or any(not part.isdigit() for part in parts):
        return False
    
    if not (1 <= month <= 12):
        return False
    
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if day > 31:
            return False
    elif month in [4, 6, 9, 11]:
        if day > 30:
            return False
    elif month == 2:
        if day > 29 or (day == 29 and not ((year % 4 == 0) and (year % 100 != 0) or year % 400 == 0)):
            return False
    
    return True