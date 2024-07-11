```
def valid_date(date):
    day, month, year = date.split('-')
    if len(date) != 9 or not all(part.isdigit() for part in date.split('-')):
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4, 6, 9, 11] and int(day) > 30) or \
       (int(month) == 2 and int(day) > 29) or \
       (int(month) not in [1, 3, 5, 7, 8, 10, 12] and int(day) > 31):
        return False
    return True