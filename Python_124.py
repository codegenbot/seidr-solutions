def valid_date(date):
    if "-" not in date:
        raise ValueError("Invalid date format")
    month, day, year = date.split("-")
    # ... rest of the code ...