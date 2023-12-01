def valid_date(date):
    if len(date) != 10:
        return False
    if date[2] != '-' or date[5] != '-':
        return False
    month = int(date[0:2])
    day = int(date[3:5])
    year = int(date[6:10])
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