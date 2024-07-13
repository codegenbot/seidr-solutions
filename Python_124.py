```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    if month < 1 or month > 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and day > days_in_month[1]:
        return False
    elif (month in [4,6,9,11] and day > days_in_month[3]) or \
         (month not in [4,6,9,11] and day > days_in_month[month-1]):
        return False
    return True