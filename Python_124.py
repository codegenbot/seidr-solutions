```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) < 1 or len(month) < 1 or len(year) < 4:
        return False
    try:
        int_day = int(day)
        int_month = int(month)
        int_year = int(year)
    except ValueError:
        return False
    if int_year < 1000:
        return False
    if int_month < 1 or int_month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int_month == 2 and int_day > 29:
        return False
    elif int_month in (1,3,5,7,8,10,12) and int_day > 31:
        return False
    elif int_month in (4,6,9,11) and int_day > 30:
        return False
    elif int_day < 1 or int_day > days_in_month[int_month - 1]:
        return False
    return True