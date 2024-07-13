```
def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(day) < 1 or len(str(year)) != 4:
        return False
    try:
        month = int(month)
        day = int(day)
        if not (1 <= month <= 12):
            return False
        if month in [1,3,5,7,8,10,12]:
            if not (1 <= int(day) <= 31):
                return False
        elif month in [4,6,9,11]:
            if not (1 <= int(day) <= 30):
                return False
        elif month == 2:
            if not (1 <= int(day) <= 29):
                return False
    except ValueError:
        return False
    return True