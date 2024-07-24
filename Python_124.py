```
def valid_date(date):
    day, month, year_str = map(int, date.split("-")[:2])
    if len(date.split("-")) == 3:
        day, month, year = map(int, date.split("-"))
        if day > 0 and day <= 31 and (month >=1 and month <=12) and (year % 4 == 0 or (year % 100 != 0 and year % 400 == 0)):
            return True
    return False