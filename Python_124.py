def valid_date(date):
    parts = date.split("-")
    day, month = map(int, parts[:2])
    year = int(parts[-1]) if len(parts) > 2 else None