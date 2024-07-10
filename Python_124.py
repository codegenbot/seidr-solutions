```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(date) != 9 or not date[2:].isdigit():
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and day > 29:
        return False
    if month in (1,3,5,7,8,10,12) and day > 31:
        return False
    if month in (4,6,9,11) and day > 30:
        return False
    if month == 2 and day > 29:
        if year % 4 != 0:
            return False
        elif year % 100 == 0 and year % 400 != 0:
            return False
        else:
            if day > 29:
                return False
    return True