```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(year) < 4:
        return False
    try:
        int_month = int(month)
        int_year = int(year)
        if int_month < 1 or int_month > 12:
            return False
        if int_month in [1,3,5,7,8,10,12]:
            if int(int_day) < 1 or int(int_day) > 31:
                return False
        elif int_month == 2:
            if int(int_day) < 1 or int(int_day) > 29:
                return False
        else:
            if int(int_day) < 1 or int(int_day) > 30:
                return False
    except ValueError:
        return False
    return True