```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int_day, int_month, int_year = map(int, [day, month, year])
        if int_month < 1 or int_month > 12:
            return False
        if (int_month in [1,3,5,7,8,10,12] and int_day > 31) or \
           (int_month in [4,6,9,11] and int_day > 30) or \
           (int_month == 2 and int_day > 29):
            return False
    except ValueError:
        return False
    return True