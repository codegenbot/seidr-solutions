```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        leap_year = True
    else:
        leap_year = False
    if month < 1 or month > 12:
        return False
    if month in [1,3,5,7,8,10,12] and day > 31:
        return False
    if month in [4,6,9,11] and day > 30:
        return False
    if month == 2 and (day > 29 or (leap_year and day > 28)):
        return False
    return True