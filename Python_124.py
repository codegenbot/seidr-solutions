def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if not (1 <= year <= 9999):
        return False
    if not (1 <= month <= 12):
        return False
    if not (1 <= day <= 31):
        return False
    if month in [4,6,9,11] and day > 30:
        return False
    if month == 2:
        if year % 4 != 0:
            return day <= 28
        else:
            if year % 100 != 0:
                return day <= 29
            elif year % 400 != 0:
                return day <= 28
            else:
                return day <= 29
    elif month in [1,3,5,7,8,10,12]:
        return day <= 31
    return False