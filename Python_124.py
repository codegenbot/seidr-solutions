```
def valid_date(date):
    month, day, year = date.split('-')
    if len(date) != 9 or not (month.isdigit() and day.isdigit() and year.isdigit()):
        return False
    month = int(month)
    day = int(day)
    if month < 1 or month > 12:
        return False
    if [4,6,9,11].count(month) > 0 and day > 30:
        return False
    if month == 2 and (day < 1 or day > 29):
        return False
    if [1,3,5,7,8,10,12].count(month) > 0 and day > 31:
        return False
    return True