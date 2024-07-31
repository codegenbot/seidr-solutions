```
def valid_date(date):
    mm-dd-yyyy = date.split('-')
    month = int(mm[0])
    day = int(mm[1])
    year = int(yr[2])

    if len(date) != 9 or len(mm) != 2 or len(yr) != 4:
        return False

    if not (1 <= month <= 12):
        return False
    elif month in [1,3,5,7,8,10,12] and day > 31:
        return False
    elif month == 2 and day > 29:
        return False
    elif month in [4,6,9,11] and day > 30:
        return False
    elif day < 1:
        return False

    return True