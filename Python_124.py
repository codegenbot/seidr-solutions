def valid_date(date):
    month, day, year = date.split("-")
    if int(month) < 1 or int(month) > 12:
        return False
    if int(day) < 1 or int(day) > 31:
        return False
    if int(year) % 4 == 0 and month == "02" and day > 29:
        return False
    if month in ["01", "03", "05", "07", "08", "10", "12"] and day > 31:
        return False
    if month in ["04", "06", "09", "11"] and day > 30:
        return False
    return True