```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if not date or len(date) != 9:
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and day > 29:
        return False
    elif month in [1,3,5,7,8,10,12] and day > 31:
        return False
    elif month in [4,6,9,11] and day > 30:
        return False
    if year < 1000:
        return False
    return True