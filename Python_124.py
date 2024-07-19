```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9 or str(month)[0] != '1' and str(month)[0] != '2':
        return False
    if month in [4,6,9,11]:
        if day > 30:
            return False
    elif month == 2:
        if year % 4 != 0:
            if day > 29:
                return False
        else:
            if day > 29:
                return False
    elif month in [1,3,5,7,8,10,12]:
        if day > 31:
            return False
    return True