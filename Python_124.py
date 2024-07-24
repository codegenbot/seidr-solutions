```
def valid_date(date):
    if '-' not in date:
        return False
    month, rest = date.split('-')
    if len(month) == 1:
        month = '0' + month
    day, year = rest.split('-')
    if len(day) == 1:
        day = '0' + day
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29):
        return False
    if int(day) < 1 or int(day) > 31:
        return False
    return True