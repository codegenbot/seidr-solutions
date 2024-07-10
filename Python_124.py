```
def valid_date(date):
    day, month, year = date.split('-')
    if len(date) != 9 or not all(part.isdigit() for part in date.split('-')):
        return False
    try:
        month, day, year = map(int, [month, day, year])
    except ValueError:
        return False
    if not (1 <= int(month) <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == '2':
        days_in_month[1] = 29 if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0) else 28
    elif month in ['1', '3', '5', '7', '8', '10', '12']:
        if int(day) > days_in_month[int(month)-1]:
            return False
    elif month in ['4', '6', '9', '11']:
        if int(day) > days_in_month[int(month)-1]:
            return False
    elif month == '2':
        if (int(year) % 4 != 0 and int(year) % 100 == 0) or (int(year) % 400 != 0):
            if int(day) > 29:
                return False
        else:
            if int(day) > days_in_month[int(month)-1]:
                return False
    return True