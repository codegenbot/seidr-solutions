def valid_date(date):
    date = date.replace('-', '')
    month, day, year = map(int, date[:2], date[2:4], date[4:])
    if len(date) != 8 or not date.isdigit():
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month in (4,6,9,11):
        if day > len(str(days_in_month[month-1])):
            return False
    elif month == 2:
        if day > '29':
            return False
    else:
        if day > str(days_in_month[month-1]):
            return False
    return True