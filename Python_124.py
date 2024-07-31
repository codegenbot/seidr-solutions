```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9 or str(month)[0] == '0' or str(day)[0] == '0':
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month in [4,6,9,11] and day > days_in_month[month-1]:
        return False
    if month == 2 and day > 29:
        return False
    return True