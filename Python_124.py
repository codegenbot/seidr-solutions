```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2:
        if day < 1 or day > days_in_month[1]:
            return False
    else:
        if day < 1 or day > days_in_month[month-1]:
            return False
    return True