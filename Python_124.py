```
def valid_date(date):
    date = date.replace('-', '/')
    day, month, year = map(int, date.split('/'))
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2 and day > 29:
        return False
    elif int(month) in (1,3,5,7,8,10,12) and day > 31:
        return False
    elif int(month) in (4,6,9,11) and day > 30:
        return False
    elif int(month) == 2 and day < 1 or day > days_in_month[1]:
        return False
    elif int(month) not in (1,2) and day < 1 or day > days_in_month[int(month)-1]:
        return False
    return True