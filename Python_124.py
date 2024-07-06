```
def valid_date(date):
    day, month, year = map(int, date.replace('-', '').split())
    if len(str(date)) != 9:
        return False
    if month < 1 or month > 12:
        return False
    if (month == 2 and day > 29) or ((month % 2 != 0 and day > 31) or (month % 2 == 0 and day > 30)):
        return False
    return True