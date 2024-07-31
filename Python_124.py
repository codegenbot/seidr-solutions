```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if int(year) < 1:
        return False
    if (month < 1 or month > 12) or ((month in [4,6,9,11]) and day > 30) or ((month == 2 and day > 29) or (month not in [1,2] and day > 31)):
        return False
    return True