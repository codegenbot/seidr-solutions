```
def valid_date(date):
    try:
        month, day, year = map(int, date.replace('-', '').split())
    except ValueError:
        return False
    if 0 < month < 13 and 1 <= day <= 31:
        if month in [1, 3, 5, 7, 8, 10, 12]:
            if day > 31:
                return False
        elif month == 2:
            if day > 29:
                return False
        else:
            if day > 30:
                return False
    return True