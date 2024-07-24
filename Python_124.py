```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if not 1 <= month <= 12:
        return False
    if month in (1,3,5,7,8,10,12) and not 1 <= day <= 31:
        return False
    if month in (4,6,9,11) and not 1 <= day <= 30:
        return False
    if month == 2 and not 1 <= day <= 29:
        return False
    return True