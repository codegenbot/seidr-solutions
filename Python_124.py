```
def valid_date(date):
    if len(date) != 10:
        return False
    day, month, year = date.split('-')
    try:
        int(day)
        int(month)
        int(year)
    except ValueError:
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2 and int(day) > days_in_month[1]:
        return False
    elif (int(month) in [1,3,5,7,8,10,12] and int(day) > 31) or \
         (int(month) in [4,6,9,11] and int(day) > 30) or \
         (int(month) == 2 and int(day) > days_in_month[1]):
        return False
    return True