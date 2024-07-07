```
def valid_date(date):
    if len(date) != 10 or date[4] != '-' or date[7] != '-':
        return False
    day, month, year = map(int, date[:2], date[3:5], date[6:])
    if not (1 <= month <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if not (1 <= day <= days_in_month[month-1]):
        return False
    return True