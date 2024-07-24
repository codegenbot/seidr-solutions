def valid_date(date):
    day_month = date.split("-")[:2]
    if len(day_month) == 2:
        day, month = map(int, day_month)
        year = int(date.split("-")[2])
    return True