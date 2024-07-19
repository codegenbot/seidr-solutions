```
def valid_date(date):
    month, day, year = date.split('-')
    if not (month.isdigit() and day.isdigit() and year.isdigit()):
        return False
    
    month = int(month)
    day = int(day)
    
    if not 1 <= month <= 12:
        return False
    elif not 1 <= day <= 31:
        if month in [4, 6, 9, 11]:
            return day <= 30
        elif month == 2:
            return day <= 29
        else:
            return day <= 31
    
    return True