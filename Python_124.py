```
def valid_date(date):
    date = date.replace('-', '/')
    day, month, year = map(int, date.split('/'))
    if len(str(month)) > 2 or (len(str(day)) > 2 and str(day)[0] != '0') or len(str(year)) > 4:
        return False
    if not (1 <= int(month) <= 12):
        return False
    if not (1 <= day <= 31):
        if month in [1,3,5,7,8,10,12]:
            return False
        elif month in [4,6,9,11]:
            return day <= 30
        else:
            return day <= 29 and year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)
    if not (1 <= int(day) <= 31):
        if month in [1,3,5,7,8,10,12]:
            return False
        elif month in [4,6,9,11]:
            return day <= 30
        else:
            return day <= 29 and year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)
    return True