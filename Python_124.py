```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts[1::])
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and int(day) > 31) or \
       (month in [4,6,9,11] and int(day) > 30) or (month == 2 and int(day) > 29):
        return False
    if len(parts[0]) != 4 or not parts[0].isdigit() or len(parts[2]) != 4 or not parts[2].isdigit():
        return False
    return True