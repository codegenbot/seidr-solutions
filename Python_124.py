```
def valid_date(date):
    date_parts = date.split('-')
    month, day, year = map(int, date_parts)
    
    if len(date_parts) != 3 or any(not part.isdigit() for part in date_parts):
        return False
    
    if not (1 <= month <= 12):
        return False
    
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if not (1 <= day <= 31):
            return False
    elif month in [4, 6, 9, 11]:
        if not (1 <= day <= 30):
            return False
    else:
        if not (1 <= day <= 29):
            return False
    
    return True