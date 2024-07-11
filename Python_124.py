```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    try:
        mm, dd = int(mm), int(dd)
    except ValueError:
        return False
    if mm < 1 or mm > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if mm == 2 and dd > days_in_month[1]:
        return False
    elif mm in (4,6,9,11) and dd > days_in_month[3]:
        return False
    elif mm != 2 and dd > days_in_month[mm-1]:
        return False
    return True