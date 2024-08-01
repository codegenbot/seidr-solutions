```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if not (1 <= month <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and not (1 <= day <= days_in_month[1]):
        return year % 4 in (0, 100) and year % 400 != 0 or 1 <= day <= 29
    elif month in [1,3,5,7,8,10,12] and not (1 <= day <= 31):
        return False
    elif month in [4,6,9,11] and not (1 <= day <= 30):
        return False
    return True