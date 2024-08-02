def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9 or str(month)[0] != '1' and str(month)[0] != '2':
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    if month < 1 or month > 12:
        return False
    return True