```
def valid_date(date):
    date_parts = date.split('-')
    month, day, year = int(date_parts[0]), int(date_parts[1]), int(date_parts[2])
    if len(date) != 9 or month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if (month % 4 == 0 and month % 100 != 0) or month == 2:
        days_in_month[1] = 29
    if day < 1 or day > days_in_month[month-1]:
        return False
    return True