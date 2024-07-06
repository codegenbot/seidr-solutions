
def valid_date(date):
    month, day, year = date.split('-')
    month = int(month)
    day = int(day)
    year = int(year)
    
    if month < 1 or month > 12:
        return False
    
    if day < 1 or day > 31:
        return False
    
    if (month in [4, 6, 9, 11] and day > 30) or (month == 2 and day > 28):
        return False
    
    if year < 1 or year > 9999:
        return False
    
    return True