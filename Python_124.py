```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if len(date) != 9:
        return False
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    return True