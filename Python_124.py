```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) > 2 or len(month) > 2:
        return False
    try:
        int_day = int(day)
        int_month = int(month)
        int_year = int(year)
    except ValueError:
        return False
    if not (1 <= int_month <= 12):
        return False
    if int_month in [1,3,5,7,8,10,12]:
        if not (1 <= int_day <= 31):
            return False
    elif int_month in [4,6,9,11]:
        if not (1 <= int_day <= 30):
            return False
    elif int_month == 2:
        if not (1 <= int_day <= 29):
            return False
    return True