```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(year) < 4:
        return False
    try:
        int(day)
        int(month)
        int(year)
    except ValueError:
        return False
    if not (1 <= int(month) <= 12):
        return False
    month_days = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2 and int(day) > month_days[1]:
        return False
    elif int(month) in (1,3,5,7,8,10,12) and int(day) > 31:
        return False
    elif int(month) in (4,6,9,11) and int(day) > 30:
        return False
    elif int(month) == 2 and int(day) < 1 or int(month) > 2 and int(day) < 1:
        return False
    elif int(month) < 1 or int(month) > 12:
        return False
    else:
        return True