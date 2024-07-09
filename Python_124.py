```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    if int(month) < 1 or int(month) > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2:
        if int(day) < 1 or int(day) > days_in_month[1]:
            return False
    elif int(month) in [4,6,9,11]:
        if int(day) < 1 or int(day) > days_in_month[3]:
            return False
    else:
        if int(day) < 1 or int(day) > days_in_month[0]:
            return False
    return True