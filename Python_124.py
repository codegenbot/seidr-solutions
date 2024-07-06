```
def is_valid_date(date):
    def is_leap_year(year):
        if year % 4 != 0:
            return False
        elif year % 100 != 0:
            return True
        elif year % 400 != 0:
            return False
        else:
            return True

    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9 or not str(month).isdigit() or not str(day).isdigit() or not str(year).isdigit():
        return False
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29 and not is_leap_year(year)) or (day > 31):
        return False
    return True