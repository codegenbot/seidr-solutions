```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if not all(1 <= x <= 12 for x in [month]):
        return False
    if month in (4, 6, 9, 11) and not 1 <= day <= 30:
        return False
    elif month == 2 and not 1 <= day <= 29:
        return False
    elif month in (1, 3, 5, 7, 8, 10, 12) and not 1 <= day <= 31:
        return False
    return True