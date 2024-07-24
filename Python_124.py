```
def valid_date(date):
    day, month_year = map(int, date.split('-'))
    month, year = divmod(month_year, 100)
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or \
       (month in [4,6,9,11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    return True