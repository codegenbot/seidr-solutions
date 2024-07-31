```
def valid_date(date):
    date = date.replace('-', '')
    if len(date) != 8:
        return False
    month, day, year = map(int, (date[:2], date[2:4], date[4:]))
    if month < 1 or month > 12:
        return False
    if [31,28,31,30,31,30,31,31,30,31,30,31][month-1] < day:
        return False
    return True