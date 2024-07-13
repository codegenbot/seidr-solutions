```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if not all(1 <= x <= 12 for x in [month]):
        return False
    if not all((1 <= x <= 31 and (x <= 7 or x % 4 == 0) and (x % 100 != 0 or x % 400 == 0)) or 
               (1 <= x <= 30) for x in [day]):
        return False
    return True