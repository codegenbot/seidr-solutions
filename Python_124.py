```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    if not (day.isdigit() and month.isdigit() and str(year).isdigit()):
        return False
    day, month, year = int(day), int(month), int(year)
    if not (1 <= month <= 12):
        return False
    if month in [4,6,9,11]:
        if day > 30:
            return False
    elif month == 2:
        if day > 29:
            return False
    elif day > 31:
        return False
    return True