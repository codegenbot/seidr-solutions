def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts[1].split('/') + [parts[0], int(parts[2])])
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and int(day) > 31) or \
       (month in [4,6,9,11] and int(day) > 30) or (month == 2 and int(day) > 29):
        return False
    if len(parts[0]) != 4 or not parts[0].isdigit() or len(parts[1]) != 2 or not parts[1].isdigit():
        return False
    return True