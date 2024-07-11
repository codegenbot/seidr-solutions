```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) > 2 or len(month) > 2 or len(year) > 4:
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [1,3,5,7,8,10,12] and int(day) > 31) or \
       (int(month) in [4,6,9,11] and int(day) > 30) or \
       (int(month) == 2 and int(day) > 29):
        return False
    return True