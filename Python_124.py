def valid_date(date):
    month, day, year = date.split("-")
    month = int(month)
    day = int(day)
    year = int(year)

    if month < 1 or month > 12:
        return False

    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if day < 1 or day > days_in_month[month - 1]:
        return False

    if year % 4 == 0 and month == 2:
        if day > 29:
            return False

    return True