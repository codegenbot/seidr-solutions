
def valid_date(date):
    month, day, year = date.split('-')
    if int(month) < 1 or int(month) > 12:
        return False
    if int(day) < 1 or int(day) > 31:
        return False
    if int(year) % 4 == 0 and month == '02' and (int(day) < 1 or int(day) > 29):
        return False
    if int(year) % 4 != 0 and month == '02' and (int(day) < 1 or int(day) > 28):
        return False
    return True