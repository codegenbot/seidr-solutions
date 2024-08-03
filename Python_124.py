```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    day, month, year = map(int, parts)
    if not (1 <= month <= 12):
        return False
    if not ((month in [4,6,9,11] and 1 <= day <= 30) or 
            (month == 2 and (year % 4 == 0 and 1 <= day <= 29 or year % 4 != 0 and 1 <= day <= 28)) or 
            (month in [1,3,5,7,8,10,12] and 1 <= day <= 31)):
        return False
    return True