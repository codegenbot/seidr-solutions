
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) != 2 or len(day) != 2 or len(year) != 4:
        return False
    month = int(month)
    day = int(day)
    year = int(year)
    if month < 1 or month > 12:
        return False
    if day < 1 or day > 31:
        return False
    if month in [4, 6, 9, 11] and day == 31:
        return False
    if month == 2 and day > 28:
        return False
    if year % 4 == 0 and month == 2 and day == 29:
        return False
    return True