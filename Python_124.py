```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    if int(year) < 1000 or int(year) > 9999:
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29) or (int(month) not in [4,6,9,11,2] and int(day) > 31):
        return False
    return True