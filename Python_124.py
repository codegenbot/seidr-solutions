```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if not (str(len(str(date)) == 8 and str(month).isdigit() and str(day).isdigit() and str(year).isdigit()):
        return False
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 28 and not year % 4 == 0) or (day > 31):
        return False
    return True