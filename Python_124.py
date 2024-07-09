def valid_date(date):
    mm_dd_yyyy = date.replace('-', '')
    if len(mm_dd_yyyy) != 8:
        return False
    month, day, year = map(int, (mm_dd_yyyy[:2], mm_dd_yyyy[2:4], mm_dd_yyyy[4:]))
    if month < 1 or month > 12:
        return False
    if month in [1,3,5,7,8,10,12]:
        if day < 1 or day > 31:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    elif month in [4,6,9,11]:
        if day < 1 or day > 30:
            return False
    return True