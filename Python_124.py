def valid_date(date):
    if not date:
        return False
    
    month, day, year = date.split('-')
    
    if len(year) != 4:
        return False
    
    if month not in ['01', '02', '03', '04', '05', '06', '07', '08', '09', '10', '11', '12']:
        return False
    
    if month in ['01', '03', '05', '07', '08', '10', '12']:
        if not (1 <= int(day) <= 31):
            return False
    elif month in ['04', '06', '09', '11']:
        if not (1 <= int(day) <= 30):
            return False
    elif month == '02':
        if not (1 <= int(day) <= 29):
            return False
    
    return True