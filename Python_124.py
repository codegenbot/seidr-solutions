```
def valid_date(date):
    day, month, year = date.split('-')
    if not (day.isdigit() and month.isdigit() and year.isdigit()):
        return False
    
    day, month, year = int(day), int(month), int(year)
    
    if not 1 <= int(month) <= 12:
        return False
    elif (int(month) in [1,3,5,7,8,10,12] and not 1 <= int(day) <= 31) or \
         (int(month) in [4,6,9,11] and not 1 <= int(day) <= 30) or \
         (int(month) == 2 and not 1 <= int(day) <= 29):
        return False
    return True