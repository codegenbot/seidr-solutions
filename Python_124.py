def valid_date(date):
    if len(date.split('-')) != 3:
        return False
    month, day, year = date.split('-')
    if not (1 <= int(month) <= 12 and 1 <= int(day) <= 31 and 1900 <= int(year) <= 2099):
        return False
    if month in [4, 6, 9, 11] and int(day) == 31:
        return False
    if month == 2 and (int(day) > 28 or (int(day) == 29 and int(year) % 4 != 0)):
        return False
    return True