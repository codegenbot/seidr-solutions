```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(day)) > 1 or (day < 1 or day > 31) or (month < 1 or month > 12) or (year < 1000 and year > 9999):
        return False
    elif [4, 6, 9, 11].count(month) and (day < 1 or day > 30):
        return False
    elif month == 2:
        if not (is_leap(year) and (day < 1 or day > 29)) and (day < 1 or day > 28):
            return False
    return True

def is_leap(year):
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)