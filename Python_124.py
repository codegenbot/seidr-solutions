```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts[1::])
    if not (1 <= month <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2:
        if day > days_in_month[1]:
            return False
    else:
        if day > days_in_month[month-1]:
            return False
    if len(parts[0]) != 4 or len(parts[1]) != 2:
        return False
    return True