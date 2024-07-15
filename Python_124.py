```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    month, day, year = int(mm), int(dd), int(yyyy)
    
    if len(date) != 9:
        return False
    
    if month < 1 or month > 12:
        return False
    elif month in [1,3,5,7,8,10,12]:
        if day < 1 or day > 31:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    elif month in [4,6,9,11]:
        if day < 1 or day > 30:
            return False
    
    return True