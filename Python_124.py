```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    try:
        mm, dd, yyyy = int(mm), int(dd), int(yyyy)
    except ValueError:
        return False
    if not (1 <= int(mm) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(mm) == 2 and int(dd) > days_in_month[1]:
        return False
    elif int(mm) in (4,6,9,11) and int(dd) > days_in_month[int(mm)-1]:
        return False
    elif int(mm) in (1,3,5,7,8,10,12) and int(dd) > days_in_month[int(mm)-1]:
        return False
    if int(dd) < 1 or int(dd) > days_in_month[int(mm)-1]:
        return False
    return True