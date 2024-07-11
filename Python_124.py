```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(day)) == 1:
        day = '0' + str(day)
    if len(str(month)) == 1:
        month = '0' + str(month)
    if not (1 <= month <= 12):
        return False
    if month in [4,6,9,11]:
        if day > 30 or day < 1:
            return False
    elif month == 2:
        if year % 4 != 0:
            if day > 28 or day < 1:
                return False
        else:
            if day > 29 or day < 1:
                return False
    else:
        if day > 31 or day < 1:
            return False
    return True