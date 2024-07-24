```
def valid_date(date):
    date_parts = date.split('-')
    if len(date_parts) != 3:
        return False
    day, month, year = map(int, date_parts)
    if month < 1 or month > 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if day < 1 or day > days_in_month[month-1]:
        return False
    return True