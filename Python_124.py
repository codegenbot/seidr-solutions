```
def valid_date(date):
    day, month, year = date.split('-')
    if not all(part.isdigit() and 0 < int(part) <= 12 for part in [month, day]):
        return False
    if int(month) > 2 and int(day) > 29:
        return False
    if int(month) % 4 == 0 and (int(month) % 100 != 0 or int(year) % 400 == 0):
        if int(day) > 29:
            return False
    if int(month) in [1,3,5,7,8,10,12] and int(day) > 31:
        return False
    if int(month) in [4,6,9,11] and int(day) > 30:
        return False
    return True