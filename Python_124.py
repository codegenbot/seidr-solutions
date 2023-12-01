def valid_date(date):
    if not date:
        return False
    month, day, year = date.split('-')
    if len(month) != 2 or len(day) != 2 or len(year) != 4:
        return False
    try:
        month = int(month)
        day = int(day)
        year = int(year)
    except ValueError:
        return False
    if month < 1 or month > 12:
        return False
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if day < 1 or day > 31:
            return False
    elif month in [4, 6, 9, 11]:
        if day < 1 or day > 30:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    else:
        return False
    return True