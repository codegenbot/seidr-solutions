```
def valid_date(date):
    date_parts = date.split('-')
    if len(date_parts) != 3:
        return False
    month, day, year = map(int, date_parts)
    if month < 1 or month > 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and day > 28:
        return False
    elif month in (4,6,9,11) and day > 30:
        return False
    elif month not in (4,6,9,11) and day > days_in_month[month-1]:
        return False
    return True