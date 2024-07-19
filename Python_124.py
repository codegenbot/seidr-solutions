```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    try:
        month, day = int(mm), int(dd)
    except ValueError:
        return False
    if not (1 <= month <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and day > days_in_month[1]:
        return False
    if month in (1,3,5,7,8,10,12) and day > days_in_month[0]:
        return False
    if month in (4,6,9,11) and day > days_in_month[1]:
        return False
    if month == 2 and day < 1:
        return False
    for i in range(1,13):
        if i == month:
            if day > days_in_month[i-1]:
                return False
    return True