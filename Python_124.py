```
def valid_date(date):
    month, day, year = date.split('-')
    if not all(x.isdigit() for x in [month, day]):
        return False
    try:
        m, d, y = int(month), int(day), int(year)
        if m < 1 or m > 12:
            return False
        if (m in [1,3,5,7,8,10,12] and d > 31) or \
           (m in [4,6,9,11] and d > 30) or d > 29 or (d > 28 and m == 2):
            return False
    except ValueError:
        return False
    return True