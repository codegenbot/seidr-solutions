```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    if int(month) < 1 or int(month) > 12:
        return False
    if int(month) in [1,3,5,7,8,10,12]:
        if int(day) < 1 or int(day) > 31:
            return False
    elif int(month) in [4,6,9,11]:
        if int(day) < 1 or int(day) > 30:
            return False
    elif int(month) == 2:
        if not (is_leap_year(int(year)) and int(day) <= 29) and int(day) > 29:
            return False
    return True

def is_leap_year(year):
    if year % 4 != 0:
        return False
    elif year % 100 != 0:
        return True
    elif year % 400 != 0:
        return False
    else:
        return True