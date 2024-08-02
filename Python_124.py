```
def valid_date(date):
    day, month, year = date.split('-')
    if not (day.isdigit() and month.isdigit() and year.isdigit()):
        return False
    day, month, year = int(day), int(month), int(year)
    if not 1 <= int(month) <= 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if not 1 <= month <= 2 or (month == 2 and year % 4 != 0):
        days_in_month[1] = 29
    if not 1 <= int(day) <= days_in_month[int(month) - 1]:
        return False
    return True