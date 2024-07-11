```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int(year)
        if not (1 <= int(month) <= 12):
            return False
        if int(month) in [4,6,9,11]:
            if 1 > int(day) or int(day) > 30:
                return False
        elif int(month) == 2:
            if not ((int(year) % 4 == 0 and 1 < int(day) < 29) or (int(year) % 4 != 0 and 1 < int(day) < 28)):
                return False
        else:
            if 1 > int(day) or int(day) > 31:
                return False
    except ValueError:
        return False
    return True