```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) < 1 or len(str(year)) < 4:
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if (int(month) == 2 and int(day) > days_in_month[1]):
        return False
    elif ((int(month) % 2 != 0 and int(month) < 8) or (int(month) % 2 == 0 and int(month) > 7)) and (int(day) > days_in_month[int(month)-1]):
        return False
    else:
        return True