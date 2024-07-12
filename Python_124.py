```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    
    try:
        int_day = int(day)
        int_month = int(month)
        int_year = int(year)
        
        if int_year < 1000 or int_year > 9999:
            return False
        
        if (int_month < 1 or int_month > 12) or (int_day < 1):
            return False
        
        days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
        
        if int_month == 2:
            if int_year % 4 == 0 and (int_year % 100 != 0 or int_year % 400 == 0):
                days_in_month[1] = 29
            else:
                days_in_month[1] = 28
        
        if int_day > days_in_month[int_month - 1]:
            return False
        
    except ValueError:
        return False
    
    return True