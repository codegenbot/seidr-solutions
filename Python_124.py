```
def valid_date(date):
    day, month, year = date.split('-')
    if len(date) != 10:
        return False
    try:
        int(day)
        int(month)
        int(year)
    except ValueError:
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(month) == 2:
        if int(day) < 1 or int(day) > 29:
            return False
    elif int(month) in [4,6,9,11]:
        if int(day) < 1 or int(day) > 30:
            return False
    else:
        if int(day) < 1 or int(day) > 31:
            return False
    return True