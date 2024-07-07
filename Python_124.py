```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int(year)
        int(month)
        int(day)
    except ValueError:
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2 and int(day) > days_in_month[1]:
        return False
    if int(month) in (1,3,5,7,8,10,12) and int(day) > 31:
        return False
    if int(month) in (4,6,9,11) and int(day) > 30:
        return False
    if int(month) == 2 and int(day) > 29:
        return False
    return True