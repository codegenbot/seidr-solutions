```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int_year = int(year)
        int_month = int(month)
        int_day = int(day)
        
        if not (int_month >= 1 and int_month <= 12):
            return False
        if int_month in [4,6,9,11]:
            if not (int_day >= 1 and int_day <= 30):
                return False
        elif int_month == 2:
            if not ((int_year % 4 == 0 and int_year % 100 != 0) or (int_year % 400 == 0)):
                if not (int_day >= 1 and int_day <= 29):
                    return False
        else:
            if not (int_day >= 1 and int_day <= 31):
                return False
    except ValueError:
        return False
    return True