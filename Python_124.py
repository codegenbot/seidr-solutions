```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(day) < 1 or len(year) < 4:
        return False
    try:
        month = int(month)
        day = int(day)
        year = int(year)
    except ValueError:
        return False
    if month > 12 or (month in [1,3,5,7,8,10,12] and day > 31) or (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    if not ((day >= 1 and day <= 31) and (month >= 1 and month <= 12)):
        return False
    return True