```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    if not (month.isdigit() and day.isdigit()):
        return False
    if int(year) < 1:
        return False
    if int(month) > 12 or (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29):
        return False
    if int(month) in [1,3,5,7,8,10,12]:
        if int(day) < 1 or int(day) > 31:
            return False
    elif int(month) in [4,6,9,11]:
        if int(day) < 1 or int(day) > 30:
            return False
    elif int(month) == 2:
        if int(day) < 1 or (int(year) % 4 != 0 and int(day) > 28) or (int(year) % 4 == 0 and int(day) > 29):
            return False
    return True