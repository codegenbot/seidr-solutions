```
def valid_date(date):
    parts = date.split("-")
    if len(parts) != 3:
        return False
    year, month, day = map(int, parts)
    if month < 1 or month > 12:
        return False
    if day < 1 or day > 31:
        return False
    if month in [4,6,9,11] and day > 30:
        return False
    if month == 2 and (day < 1 or day > 28):
        if year % 4 != 0:
            return False
        elif year % 100 == 0 and year % 400 != 0:
            return False
        else:
            return True
    return True