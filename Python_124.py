```
def valid_date(date):
    parts = date.split('-')
    if len(parts) > 1:
        return False
    else:
        return True