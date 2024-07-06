def valid_date(date):
    if len(date) != 10:
        return False
    month, day, year = date.split("-")
    if int(month) < 1 or int(month) > 12:
        return False
    if int(day) < 1 or int(day) > 31:
        return False
    if int(year) % 4 == 0 and int(month) == 2 and int(day) > 29:
        return False
    return True