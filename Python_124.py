```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    if int(year) < 1000 or int(year) > 9999:
        return False
    if not (int(month) >= 1 and int(month) <= 12):
        return False
    if not (int(day) >= 1):
        return False
    if int(month) in [4,6,9,11]:
        if int(day) > 30:
            return False
    elif int(month) == 2:
        if int(year) % 4 != 0:
            if int(day) > 28:
                return False
        else:
            if int(day) > 29:
                return False
    elif int(month) in [1,3,5,7,8,10,12]:
        if int(day) > 31:
            return False
    return True