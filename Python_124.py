```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if len(str(date)) != 9 or len(str(date).split('-')[0]) > 2 or len(str(date).split('-')[1]) > 2:
        return False
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    return True