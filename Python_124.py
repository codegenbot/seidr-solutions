```
def valid_date(date):
    day, month, year = date.split('-')
    if len(date) != 9 or not (day.isdigit() and month.isdigit() and year.isdigit()):
        return False
    day, month, year = int(day), int(month), int(year)
    if month < 1 or month > 12:
        return False
    if month in [1,3,5,7,8,10,12] and (day < 1 or day > 31):
        return False
    if month == 2 and ((year % 4 != 0) or (year % 100 == 0 and year % 400 != 0)) and (day < 1 or day > 29):
        return False
    if month in [4,6,9,11] and (day < 1 or day > 30):
        return False
    return True