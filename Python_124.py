def valid_date(date):
    try:
        day, month, year = map(int, date.split('-'))
        if 1 <= day <= 31 and 1 <= month <= 12 and len(str(year)) == 4:
            return True
    except ValueError:
        pass
    return False