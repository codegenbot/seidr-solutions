```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(date) != 9 or day < 1 or day > 31 or month < 1 or month > 12:
        return False
    if [4,6,9,11].count(month) and day > 30:
        return False
    if month == 2 and (day < 1 or (year % 4 != 0 and day > 29)):
        return False
    return True