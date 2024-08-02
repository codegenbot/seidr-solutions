```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(year) < 4:
        return False
    try:
        int_month = int(month)
        int_day = int(day)
    except ValueError:
        return False
    if not (1 <= int_month <= 12):
        return False
    if int_month in [1,3,5,7,8,10,12]:
        max_days = 31
    elif int_month == 2:
        max_days = 29 if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0) else 28
    else:
        max_days = 30
    if not (1 <= int_day <= max_days):
        return False
    return True