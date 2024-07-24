```
def valid_date(date):
    month_day_year = date.split('-')
    month, day, year = map(int, month_day_year)
    if len(str(month)) == 1:
        month = '0' + str(month)
    if len(str(day)) == 1:
        day = '0' + str(day)
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 28):
        if int(year) % 4 != 0 and int(day) > 29:
            return False
        elif int(year) % 4 == 0 and int(day) > 29:
            if int(year) % 100 == 0 and int(day) > 28:
                return False
            elif int(year) % 400 == 0 and int(day) > 29:
                return False
    if int(day) < 1 or int(day) > 31:
        return False
    return True