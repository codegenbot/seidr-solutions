```
def valid_date(date):
    date_parts = date.split('-')
    if len(date_parts) != 3:
        return False
    day, month, year = map(int, date_parts)
    if day < 1 or day > 31:
        return False
    if (month < 1 or month > 12) or ((month in [4,6,9,11]) and (day > 30)) or ((month == 2) and (day > 29)):
        return False
    return True