```
def valid_date(date):
    day, month, year = date.split('-')
    try:
        int_day = int(day)
        int_month = int(month)
    except ValueError:
        return False
    if len(date) != 9 or not (1 <= int_month <= 12 and 1 <= int_day <= 31):
        return False
    if month in ['01', '03', '05', '07', '08', '10', '12']:
        max_days = 31
    elif month in ['04', '06', '09', '11']:
        max_days = 30
    elif month == '02':
        if year % 4 != 0:
            max_days = 28
        else:
            max_days = 29
    if int_day > max_days:
        return False
    return True