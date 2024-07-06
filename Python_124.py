def valid_date(date):
    month, day, year = date.split("-")
    if len(month) != 2 or len(day) != 2 or len(year) != 4:
        return False
    if int(month) not in range(1, 13) or int(day) not in range(1, 32):
        return False
    if int(month) in [4, 6, 9, 11] and int(day) > 30:
        return False
    if int(month) == 2 and int(day) > 28:
        return False
    if int(year) % 4 == 0 and int(month) == 2 and int(day) > 29:
        return False
    return True