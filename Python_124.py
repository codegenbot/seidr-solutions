```
def valid_date(date):
    date = date.replace('-', '/')
    day, month, year = map(int, date.split('/'))
    if len(str(month)) != 2 or len(str(day)) != 2:
        return False
    if int(year) < 1:
        return False
    if int(month) > 12 or (int(month) == 2 and day > 29):
        return False
    elif [4, 6, 9, 11].count(int(month)) > 0 and day > 30:
        return False
    elif [1, 3, 5, 7, 8, 10, 12].count(int(month)) > 0 and day > 31:
        return False
    else:
        return True