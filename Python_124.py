```
def valid_date(date):
    month, day, year = date.split('-')
    try:
        m = int(month)
        d = int(day)
        y = int(year)
    except ValueError:
        return False
    if m < 1 or m > 12:
        return False
    if (m in [4,6,9,11] and d > 30) or (m == 2 and d > 29) or (d > 31):
        return False
    return True