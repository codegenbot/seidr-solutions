def valid_date(date):
    month, day, year = date.split("-")
    if len(month) != 2 or len(day) != 2 or len(year) != 4:
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if int(day) < 1 or int(day) > 31:
        return False
    if int(month) in [4, 6, 9, 11] and int(day) == 31:
        return False
    if int(month) == 2 and int(day) > 28:
        return False
    return True