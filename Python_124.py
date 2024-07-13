def valid_date(date):
    month, day, year = map(int, date.split('-'))
    
    if len(str(date)) != 9:
        return False
    
    if month < 1 or month > 12:
        return False
    elif [4,6,9,11].count(month) and day > 30:
        return False
    elif month == 2 and day > 29:
        return False
    elif month in [1,3,5,7,8,10,12] and day > 31:
        return False
    elif day < 1:
        return False
    
    return True