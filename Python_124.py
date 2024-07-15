```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(day) < 1 or len(year) < 4:
        return False
    if int(year) < 1000 or int(year) > 9999:
        return False
    if not (int(month) >= 1 and int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2:
        if int(day) < 1 or int(day) > 29:
            return False
    elif int(month) in [1,3,5,7,8,10,12]:
        if int(day) < 1 or int(day) > 31:
            return False
    else:
        if int(day) < 1 or int(day) > 30:
            return False
    return True