def valid_date(date):
    date = date.replace("-", "/").replace("/", "-")
    month, day, year = map(int, date.split("-"))

    if len(date) != 9 or month < 1 or month > 12:
        return False
    elif (
        (month in [1, 3, 5, 7, 8, 10, 12] and day < 1 or day > 31)
        or (month in [4, 6, 9, 11] and day < 1 or day > 30)
        or (month == 2 and day < 1 or day > 29)
    ):
        return False

    return True