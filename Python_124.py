def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        days_in_month = [31,29,31,30,31,30,31,31,30,31,30,31]
    else:
        days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month > 0 and month <= len(days_in_month):
        if day < 1 or day > days_in_month[month - 1]:
            return False
    else:
        return False
    return True