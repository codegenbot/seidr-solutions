def valid_date(date):
    day, month = map(int, date.split("-")[:2])
    year = int(date.split("-")[2])