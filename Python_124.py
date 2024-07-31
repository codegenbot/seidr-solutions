```
def valid_date(date):
    parts = date.split('-')
    month = int(parts[0])
    day = int(parts[1])
    year = int(parts[2])
    
    if len(parts) != 3:
        return False
    
    if month < 1 or month > 12:
        return False
    
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    elif month in [1,3,5,7,8,10,12]:
        if day > 31:
            return False
    
    return True