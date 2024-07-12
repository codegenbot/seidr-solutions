```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) < 1 or len(str(year)) < 4:
        return False
    try:
        month, day = int(month), int(day)
    except ValueError:
        return False
    if month < 1 or month > 12:
        return False
    if (month == 2 and day > 29) or ((month in [1,3,5,7,8,10,12]) and day > 31) or ((month in [4,6,9,11]) and day > 30):
        return False
    return True