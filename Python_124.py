```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 10 or not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month < 3:
        month -= 1
    elif month == 2 and year % 4 != 0:
        return False
    elif month > 2 and year % 4 == 0 and (month == 3 or month % 4 == 0):
        days_in_month[1] = 29
    if day < 1 or day > days_in_month[month - 1]:
        return False
    return True