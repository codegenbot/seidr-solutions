def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if (month < 1 or month > 12) or (day < 1):
        return False
    if month in [4,6,9,11]:
        if day > 30:
            return False
    elif month == 2:
        if year % 4 != 0 and day > 29:
            return False
        elif year % 100 != 0 and day > 28:
            return False
        elif year % 400 != 0 and day > 29:
            return False
        else:
            if day > 29:
                return False
    else:
        if day > 31:
            return False
    return True