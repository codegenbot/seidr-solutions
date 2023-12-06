def valid_date(date):
    month, day, year = date.split('-')
    if len(month) != 2 or len(day) != 2 or len(year) != 4:
        return False
    month = int(month)
    day = int(day)
    year = int(year)
    if not (1 <= month <= 12 and 1 <= day <= 31 and 1900 <= year <= 2099):
        return False
    if month in [4, 6, 9, 11] and day == 31:
        return False
    if month == 2 and (day > 28 or (day == 29 and year % 4 != 0)):
        return False
    return True