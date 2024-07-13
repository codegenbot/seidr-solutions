```
def valid_date(date):
    mm_dd_yyyy = date.split('-')
    month, day, year = map(int, mm_dd_yyyy)
    
    if len(mm_dd_yyyy) != 3:
        return False
    if month < 1 or month > 12:
        return False
    
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        days_in_month[1] = 29
    
    if month < 1 or month > 12:
        return False
    if day < 1 or day > days_in_month[month-1]:
        return False
    
    return True