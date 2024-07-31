```
def valid_date(date):
    day, month, year = date.split('-')
    month = int(month)
    if len(day) > 2 or len(month) > 2:
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2:
        days_in_month[1] = 29
    elif month in [4,6,9,11]:
        days_in_month[month-1] = 30
    elif month in [1,3,5,7,8,10,12]:
        days_in_month[month-1] = 31
    if int(day) < 1 or int(day) > days_in_month[month-1]:
        return False
    return True