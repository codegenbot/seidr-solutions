```
def valid_date(date):
    parts = date.split('-')
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    if len(parts) != 3 or any(not part.isdigit() for part in parts):
        return False
    if not (1 <= month <= 12):
        return False
    if (month == 2 and 1 > day or day > 29) or ((month % 2) != 0 and 1 > day or day > 31) or (month % 2 == 0 and 1 > day or day > 30):
        return False
    return True