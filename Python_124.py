```
def valid_date(date):
    date_parts = date.split('-')
    if len(date_parts) != 3:
        return False
    month, day, year = map(int, date_parts)
    if month < 1 or month > 12:
        return False
    if (month == 2 and day > 29) or ((month % 2 != 0 and day > 31) or (month % 2 == 0 and day > 30)):
        return False
    return True