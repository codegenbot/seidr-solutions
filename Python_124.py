```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if day < 1 or day > days_in_month[month - 1]:
        return False
    if month in (4,6,9,11) and day > 30:
        return False
    if month == 2 and (day < 1 or day > 29):
        year_is_leap = (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
        if not year_is_leap and day > 28:
            return False
    return True