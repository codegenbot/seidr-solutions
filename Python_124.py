def valid_date(date):
    day, month, year = date.split("-")
    if not all(part.isdigit() and 1 <= int(part) <= 31 for part in [day, month]):
        return False
    if (int(month) in [4, 6, 9, 11] and int(day) > 30) or (
        (int(month) == 2 and 0 < int(day) > 29)
        or (int(month) % 4 == 0 and 0 < int(day) > 29)
    ):
        return False
    if not all(part.isdigit() and 1900 <= int(part) <= 9999 for part in [year]):
        return False
    return True