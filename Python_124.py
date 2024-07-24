def valid_date(date):
    date = date.replace('-', '/')
    day, month, year = map(int, date.split('/'))
    if len(date) != 8 or month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 28) or (day > 31):
        return False
    return True