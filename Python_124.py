```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9 or month < 1 or month > 12:
        return False
    if month in [4,6,9,11] and day > 30:
        return False
    if month == 2 and (day < 1 or day > 29):
        return False
    if month in [1,3,5,7,8,10,12] and day > 31:
        return False
    return True