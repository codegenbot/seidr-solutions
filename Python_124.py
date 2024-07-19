```
def valid_date(date):
    if len(date) < 10:
        return False
    date = date.replace('-', '')
    month, day, year = map(int, date[:2], date[2:4], date[4:])
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or \
       (month in [4,6,9,11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    return True