```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if not all(1 <= x <= 12 for x in [month, day]):
        return False
    if ((month % 4 == 0 and (month % 100 != 0 or year % 400 == 0)) or 
        month in [1,3,5,7,8,10,12]) and day > 31:
        return False
    if month in [4,6,9,11] and day > 30:
        return False
    if ((month % 4 == 0 and (month % 100 != 0 or year % 400 == 0)) or 
        month not in [1,3,5,7,8,10,12]) and day > 29:
        return False
    return True