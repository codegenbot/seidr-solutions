```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(mm) == 1: 
        mm = '0' + mm
    if len(dd) == 1:
        dd = '0' + dd
    if not (date[2:].isdigit() and len(yyyy) == 4):
        return False
    if int(mm) < 1 or int(mm) > 12:
        return False
    if int(mm) in [1,3,5,7,8,10,12]:
        if int(dd) < 1 or int(dd) > 31:
            return False
    elif int(mm) in [4,6,9,11]:
        if int(dd) < 1 or int(dd) > 30:
            return False
    elif int(mm) == 2:
        if not (is_leap_year(int(yyyy)) and int(dd) <= 29 or 
                not is_leap_year(int(yyyy)) and int(dd) <= 28):
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