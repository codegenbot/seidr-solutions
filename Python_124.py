```
def valid_date(date):
    date_parts = date.split("-")
    if len(date_parts) == 2:
        return False
    if len(date) != 9:
        return False
    if int(date_parts[0]) < 1 or int(date_parts[0]) > 12:
        return False
    if (
        (int(date_parts[0]) in [1, 3, 5, 7, 8, 10, 12] and int(date_parts[1]) > 31)
        or (int(date_parts[0]) in [4, 6, 9, 11] and int(date_parts[1]) > 30)
        or (int(date_parts[0]) == 2 and int(date_parts[1]) > 29)
    ):
        return False

    return True