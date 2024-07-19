```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if int(day) < 1 or int(day) > (31 if int(month) in [1,3,5,7,8,10,12] else 30 if int(month) in [4,6,9,11] else 29):
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    return True