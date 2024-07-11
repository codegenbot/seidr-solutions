```
def valid_date(date):
    date_parts = date.split("-")
    
    if len(date) != 9:
        return False
    if len(date_parts) != 3:
        return False
    
    month = int(date_parts[0])
    day = int(date_parts[1])
    year = int(date_parts[2])

    if month < 1 or month > 12:
        return False
    if (
        (month in [1, 3, 5, 7, 8, 10, 12] and day > 31)
        or (month in [4, 6, 9, 11] and day > 30)
        or (month == 2 and day > 29)
    ):
        return False

    return True