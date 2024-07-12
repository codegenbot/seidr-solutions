```
def valid_date(date):
    date_parts = date.split('-')
    
    if len(date_parts) != 3:
        return False
    
    month, day, year = map(int, date_parts)
    
    if month < 1 or month > 12:
        return False
    
    if (month in [4,6,9,11] and int(day) > 30) or \
       (month == 2 and int(day) > 29):
        return False
    
    return True