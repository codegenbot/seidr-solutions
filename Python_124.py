```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(year) < 4:
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
    else:
        if not (1 <= int_day <= 29) or (int_year % 4 == 0 and int_year % 100 != 0 or int_year % 400 == 0):
            return False
    return True