```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(day)) == 1:
        day = '0' + str(day)
    if len(str(month)) == 1:
        month = '0' + str(month)
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [1,3,5,7,8,10,12] and day < 1 or day > 31) or \
       (int(month) in [4,6,9,11] and day < 1 or day > 30) or \
       (int(month) == 2 and day < 1 or day > 29):
        if int(year) % 4 != 0:
            return False
        elif int(year) % 100 == 0 and int(year) % 400 != 0:
            return False
    return True