```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts[1::])
    if not (1 <= month <= 12):
        return False
    if ((month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) and day > 31) or \
       ((month == 4 or month == 6 or month == 9 or month == 11) and day > 30) or (month == 2 and day > 29):
        return False
    if len(parts[0]) != 4 or len(parts[1]) != 2:
        return False
    return True