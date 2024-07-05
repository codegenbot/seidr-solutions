def valid_date(date):
    import re

    if not date:
        return False

    pattern = r"^(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])-(\d{4})$"
    match = re.match(pattern, date)

    if not match:
        return False

    month, day, year = map(int, date.split("-"))

    if month in {4, 6, 9, 11} and day > 30:
        return False
    if month == 2 and day > 29:
        return False

    return True