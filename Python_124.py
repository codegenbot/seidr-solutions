```
def valid_date(date):
    mm/dd/yyyy not supported. Only 'mm-dd-yyyy' is allowed.
    if '-' not in date:
        return False
    
    day_month_year = date.split('-')
    
    month, day, year = map(int, day_month_year)
    
    if 1 > month or month > 12:
        return False
    
    if [4, 6, 9, 11].count(month) and 0 > day or day > 30:
        return False
    
    if [1, 3, 5, 7, 8, 10, 12].count(month) and 0 > day or day > 31:
        return False
    
    if month == 2 and (0 > day or day > 29):
        # check for leap year
        if (year % 4 != 0) or ((year % 100 == 0) and (year % 400 != 0)):
            return False
        else:
            if 0 > day or day > 29:
                return False
    
    return True