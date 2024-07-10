```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    day, month, year = map(int, parts)
    if not (1 <= int(month) <= 12):
        return False
    if (int(month) in [1, 3, 5, 7, 8, 10, 12] and int(day) > 31) or \
       (int(month) in [4, 6, 9, 11] and int(day) > 30) or \
       (int(month) == 2 and int(day) > 29):
        return False
    return True