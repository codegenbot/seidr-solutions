```
def valid_date(date):
    date = date.replace('-', '/')
    parts = date.split('/')
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    
    if len(date) != 9 or len(parts) != 3:
        return False
    
    if not (1 <= month <= 12):
        return False
    
    if not (1 <= day <= 31):
        if month in [4, 6, 9, 11]:
            return day <= 30
        elif month == 2:
            return day <= 29 or year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)
        else:
            return day <= 28
    
    return True