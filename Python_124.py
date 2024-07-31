```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    day, month, year = map(int, parts)
    if day < 1 or day > 31:
        return False
    if (month < 1 or month > 12) and not ((month == 2 and day <= 29) or (month in [4,6,9,11] and day > 30)):
        return False
    if len(parts[0]) != 2 or len(parts[1]) != 2 or len(parts[2]) != 4:
        return False
    return True