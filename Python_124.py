def valid_date(date):
    import re

    if not date:
        return False
    pattern = r"^(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])-\d{4}$"
    if not re.match(pattern, date):
        return False
    month, day, year = map(int, date.split("-"))
    if month in {4, 6, 9, 11} and day > 30:
        return False
    if month == 2 and day > 29:
        return False
    return True


# Examples
print(valid_date("03-11-2000"))  # True
print(valid_date("15-01-2012"))  # False
print(valid_date("04-0-2040"))  # False
print(valid_date("06-04-2020"))  # True
print(valid_date("06/04/2020"))  # False