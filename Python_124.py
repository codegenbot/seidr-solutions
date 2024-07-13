```
def valid_date(date):
    date_parts = date.split('-')
    month, day, year = int(date_parts[0]), int(date_parts[1]), int(date_parts[2])
    
    if len(date) != 9:
        return False
    
    if not (1 <= month <= 12 and 1 <= day <= 31):
        return False
    
    if month in [1,3,5,7,8,10,12]:
        if day > 31:
            return False
    elif month == 2:
        if day > 29:
            return False
    else: 
        if day > 30:
            return False
    
    return True