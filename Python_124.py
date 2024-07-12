```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    try:
        m, d, y = map(int, [month, day, year])
        if m < 1 or m > 12:
            return False
        days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
        if m == 2 and d > days_in_month[1]:
            return False
        elif (m in [4,6,9,11] and d > days_in_month[m-1]) or (m == 3 and d > 31) or (m in [5,7,8,10,12] and d > 30):
            return False
    except ValueError:
        return False
    return True