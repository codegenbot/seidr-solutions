```
def valid_date(date):
    parts = date.split('-')
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    if len(parts) != 3:
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month in (4,6,9,11) and day > len(str(days_in_month[month-1])):
        return False
    if month == 2:
        if day > len(str(29)):
            return False
    elif day > len(str(days_in_month[month-1])):
        return False
    return True