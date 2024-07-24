```
def valid_date(date):
    date = date.replace('-', '').replace('/', '')
    day, month, year = map(int, date[:2], date[2:4], date[4:])
    if len(date) != 8 or not (1 <= int(year) % 100 <= 999 and 0 < int(month) <= 12 and 0 < int(day) <= 31):
        return False
    month_days = [31,28,31,30,31,30,31,31,30,31,30,31]
    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) and month == 2:
        day <= 29
    elif month in [1,3,5,7,8,10,12]:
        day <= 31
    elif month in [4,6,9,11]:
        day <= 30
    return True