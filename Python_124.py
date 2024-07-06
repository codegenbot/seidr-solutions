```
def valid_date(date):
    mmddyyyy = date.replace('-', '')
    if len(mmddyyyy) != 8:
        return False
    month, day, year = map(int, (mmddyyyy[:2], mmddyyyy[2:4], mmddyyyy[4:]))
    if not 1 <= month <= 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and day > days_in_month[1]:
        return False
    elif month in (4, 6, 9, 11) and day > days_in_month[month-1]:
        return False
    elif month not in (4, 6, 9, 11) and day > days_in_month[month-1]:
        return False
    return True