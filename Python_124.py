```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) != 2 or len(dd) != 2 or len(yyyy) != 4:
        return False
    mm, dd, yyyy = int(mm), int(dd), int(yyyy)
    if mm < 1 or mm > 12:
        return False
    if (mm in [1,3,5,7,8,10,12] and int(dd) > 31) or \
       (mm in [4,6,9,11] and int(dd) > 30) or (mm == 2 and int(dd) > 29):
        return False
    if not (0 < int(dd) <= 31) or not (1000 < int(yyyy) <= 9999):
        return False
    return True