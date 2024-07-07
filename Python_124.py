```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [1,3,5,7,8,10,12] and int(day) > 31) or \
       (int(month) in [4,6,9,11] and int(day) > 30) or \
       (int(month) == 2 and int(day) > 29):
        return False
    return True