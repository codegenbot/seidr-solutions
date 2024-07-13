```
def valid_date(date):
    day, month, year = date.split('-')
    month = int(month)
    if len(date) != 9 or not date.replace('-', ' ').replace(',', '').isalnum():
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and int(day) > days_in_month[1]:
        return False
    elif month in (4,6,9,11) and int(day) > days_in_month[month-1]:
        return False
    elif month not in (4,6,9,11) and int(day) > 31:
        return False
    return True