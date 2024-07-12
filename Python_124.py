```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int(year)
    except ValueError:
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2:
        if not (1 <= int(day) <= days_in_month[1]):
            return False
    elif not (1 <= int(day) <= days_in_month[int(month)-1]):
        return False
    return True