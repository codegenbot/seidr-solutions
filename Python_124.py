```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    if day < 1 or day > 31:
        return False
    return True