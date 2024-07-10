```
def valid_date(date):
    date = date.replace('-', '/')
    if len(date) != 9 or date[2] != '/':
        return False
    month, day, year = map(int, date.split('/'))
    if month < 1 or month > 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and day > 29:
        return False
    elif month in (1,3,5,7,8,10,12) and day > 31:
        return False
    elif month in (4,6,9,11) and day > 30:
        return False
    elif day < 1 or day > days_in_month[month-1]:
        return False
    return True