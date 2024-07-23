```
def valid_date(date):
    month, day, year = date.split('-')
    month = int(month)
    day = int(day)
    
    if len(date) != 9 or not date[:2].isdigit() or not date[3:5].isdigit() or not date[6:].isdigit():
        return False
    
    if month < 1 or month > 12:
        return False
    
    if month in [1,3,5,7,8,10,12]:
        if day < 1 or day > 31:
            return False
    elif month == 2:
        if not (day >= 1 and day <= 29):
            return False
    else:
        if day < 1 or day > 30:
            return False
    
    return True