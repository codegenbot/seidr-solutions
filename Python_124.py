```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(day)) > 1 or len(str(month)) > 2:
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month in (4,6,9,11):
        if day > len(str(days_in_month[month-1])):
            return False
    elif month == 2:
        if day > len(str(days_in_month[1])):
            return False
    else:
        if day > 31:
            return False
    return True