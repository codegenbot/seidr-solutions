```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 2:
        return False
    month, year = parts[0], parts[1]
    if not month.isdigit() or not year.isdigit():
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if len(year) != 4 or not year[:1].isdigit() or not all(c.isdigit() for c in year[1:]):
        return False
    return True