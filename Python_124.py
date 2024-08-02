```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    if int(mm) < 1 or int(mm) > 12:
        return False
    if (int(mm) in [1,3,5,7,8,10,12] and int(dd) < 1 or int(dd) > 31) or \
       (int(mm) in [4,6,9,11] and int(dd) < 1 or int(dd) > 30) or \
       (int(mm) == 2 and int(dd) < 1 or int(dd) > 29):
        return False
    return True