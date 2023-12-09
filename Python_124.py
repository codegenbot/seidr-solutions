def valid_date(date):
    month, day, year = date.split('-')
    if int(month) < 1 or int(month) > 12:
        return False
    if int(day) < 1 or int(day) > 31:
        return False
    if int(year) % 4 == 0 and int(month) == 2 and int(day) > 29:
        return False
    if int(year) % 4 != 0 and int(month) == 2 and int(day) > 28:
        return False
    if (int(month) in [1, 3, 5, 7, 8, 10, 12] and int(day) > 31):
        return False
    if (int(month) in [4, 6, 9, 11] and int(day) > 30):
        return False
    return True