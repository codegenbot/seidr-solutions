```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29):
        if year[0] != '2' or int(year[1:]) < 00:
            return False
        if int(year) % 4 != 0:
            return False
    if int(day) < 1 or int(day) > int(month == "01" and int(month) *31 or int(month) in [4,6,9,11] and 30 or 28):
    return True