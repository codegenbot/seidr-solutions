```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month in (4,6,9,11):
        if day > days_in_month[month-1]:
            return False
    elif month == 2:
        if day > 29:
            return False
    elif month in (1,3,5,7,8,10,12):
        if day > days_in_month[month-1]:
            return False
    return True