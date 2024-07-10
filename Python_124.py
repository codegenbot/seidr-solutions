```
def valid_date(date):
    parts = date.split('-')
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    if len(parts) != 3 or any(not part.isdigit() for part in parts):
        return False
    if not (1 <= month <= 12):
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and day > days_in_month[1]:
        return False
    elif month in (1, 3, 5, 7, 8, 10, 12) and day > days_in_month[0]:
        return False
    elif month in (4, 6, 9, 11) and day > days_in_month[1]:
        return False
    else:
        return True