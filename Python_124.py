```
def find_invalid_dates(dates):
    invalid_dates = []
    for date in dates:
        mm_dd_yyyy = date.replace('-', '')
        if len(mm_dd_yyyy) != 8:
            invalid_dates.append(date)
            continue
        month, day, year = map(int, (mm_dd_yyyy[:2], mm_dd_yyyy[2:4], mm_dd_yyyy[4:]))
        if not (1 <= month <= 12):
            invalid_dates.append(date)
            continue
        days_in_month = [31,28,29,30,31,30,31,31,30,31,30,31]
        if not (1 <= day <= days_in_month[month-1]):
            invalid_dates.append(date)
    return invalid_dates