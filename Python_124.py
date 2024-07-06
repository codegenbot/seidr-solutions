```
def valid_date(date):
    try:
        month, day, year = date.split('-')
        if len(month) != 2 or len(day) != 2 or len(str(year)) != 4:
            return False
        month, day, year = int(month), int(day), int(year)
        if month < 1 or month > 12:
            return False
        days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
        if month == 2 and (day < 1 or day > 29):
            return False
        if month in [4,6,9,11] and (day < 1 or day > days_in_month[month-1]):
            return False
        if month in [1,3,5,7,8,10,12] and (day < 1 or day > 31):
            return False
        return True
    except ValueError:
        return False