```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9 or month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    if (day < 1 or day > 31) and (month not in [4,6,9,11]):
        return False
    return True