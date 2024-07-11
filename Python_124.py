```
def valid_date(date):
    day, month, year = date.split('-')
    if not all(part.isdigit() and 0 < int(part) <= 12 for part in [month, day]):
        return False
    if int(month) > 2 and (int(month) % 4 == 0 and int(day) > 29):
        return False
    elif int(month) in [1,3,5,7,8,10,12] and int(day) > 31:
        return False
    elif int(month) in [4,6,9,11] and int(day) > 30:
        return False
    else:
        return True