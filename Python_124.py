def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    day, month, year = parts
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int(year)
        if not (int(month) >= 1 and int(month) <= 12):
            return False
        if int(month) in [4,6,9,11]:
            if int(day) > 30 or int(day) < 1:
                return False
        elif int(month) == 2:
            if not ((int(year) % 4 == 0 and int(year) % 100 != 0) or (int(year) % 400 == 0)):
                if int(day) > 29 or int(day) < 1:
                    return False
        else:
            if int(day) > 31 or int(day) < 1:
                return False
    except ValueError:
        return False
    return True