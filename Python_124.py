```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and (day < 1 or day > days_in_month[1]):
        return False
    elif month in [1,3,5,7,8,10,12] and (day < 1 or day > 31):
        return False
    elif month in [4,6,9,11] and (day < 1 or day > 30):
        return False
    elif month == 2 and day > days_in_month[1]:
        if year % 4 != 0:
            return False
        elif year % 100 == 0 and year % 400 != 0:
            return False
    return True