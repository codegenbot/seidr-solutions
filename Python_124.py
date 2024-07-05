def valid_date(date):
    import re

    if not date:
        return False
    if not re.match(r"^\d{2}-\d{2}-\d{4}$", date):
        return False
    month, day, year = map(int, date.split("-"))
    if month < 1 or month > 12:
        return False
    if month in {1, 3, 5, 7, 8, 10, 12}:
        return 1 <= day <= 31
    elif month in {4, 6, 9, 11}:
        return 1 <= day <= 30
    elif month == 2:
        return 1 <= day <= 29
    return False