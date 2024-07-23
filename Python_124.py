```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(day)) > 1 or len(str(month)) > 2:
        return False
    if (month < 1 or month > 12) or ((month in [4,6,9,11]) and (day > 30)) or ((month == 2) and (day > 29)) or ((month in [1,3,5,7,8,10,12]) and (day > 31)):
        return False
    return True