```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    if int(year)[0] == '2':
        return (0 < int(day) <= 29 and 1 < int(month) <= 12)
    elif (int(year)[1]%4==0 and int(year)[1]%100!=0) or (int(year)[1]%400==0):
        if 0 < int(day) <= 30 and 1 < int(month) <= 12:
            return True
    else:
        if 0 < int(day) <= 31 and 1 < int(month) <= 12:
            return True
    return False