```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if not (1 <= month <= 12 and 1 <= day <= 31):
        return False
    if month in [4,6,9,11]:
        if day > 30:
            return False
    elif month == 2:
        if day > 29:
            return False
    elif month in [1,3,5,7,8,10,12]:
        if day > 31:
            return False
    return True