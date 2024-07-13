def valid_date(date):
    month, day, year = date.split('-')
    if not all(part.isdigit() and 0 < int(part) <= 12 for part in [month, year]):
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) > 2 and int(year) % 4 == 0:
        days_in_month[1] = 29
    if not (1 <= int(day) <= days_in_month[int(month)-1]):
        return False
    return True