```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if len(str(date)) != 9 or month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        days_in_month[1] = 29
    if month < 1 or month > 12:
        return False
    if day < 1 or day > days_in_month[month - 1]:
        return False
    return True