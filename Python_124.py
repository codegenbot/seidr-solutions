def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    try:
        month = int(mm)
        day = int(dd)
    except ValueError:
        return False
    if not (1 <= month <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and day > days_in_month[1]:
        return False
    elif month in (4,6,9,11) and day > days_in_month[3]:
        return False
    elif month not in (1,2,4,6,9,11) and day > 31:
        return False
    if day < 1:
        return False
    return True