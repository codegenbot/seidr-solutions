def valid_date(date):
    date_str, _, year = date.partition("-")
    month, day = map(int, date_str.split("-"))

    if len(date) != 10 or not date_str:
        return False

    if month < 1 or month > 12:
        return False

    if (
        (month in [1, 3, 5, 7, 8, 10, 12] and day > 31)
        or (month in [4, 6, 9, 11] and day > 30)
        or (month == 2 and day > 28)
    ):
        return False

    return True