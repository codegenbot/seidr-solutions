```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29):
        return False
    if int(day) < 1 or int(day) > int(month) if month in ['04','06','09','11'] else 31:
        return False
    return True