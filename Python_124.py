```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    if int(mm) < 1 or int(mm) > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(mm) == 2:
        days_in_month[1] = 29 if int(yyyy) % 4 == 0 else 28
    if int(dd) < 1 or int(dd) > days_in_month[int(mm)-1]:
        return False
    return True