```
def is_valid_date(date):
    day, month, year = map(int, date.split('-'))
    if not (str(day).isdigit() and str(month).isdigit() and str(year).isdigit()):
        return False
    if len(str(date)) != 8:
        return False
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 28) or (day > 31):
        return False
    return True