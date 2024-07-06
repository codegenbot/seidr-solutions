```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    if len(date) != 9 or not (mm.isdigit() and dd.isdigit() and yyyy.isdigit()):
        return False
    if int(mm) < 1 or int(mm) > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int(mm) == 2:
        if int(dd) < 1 or int(dd) > 29:
            return False
    elif int(mm) in (1,3,5,7,8,10,12):
        if int(dd) < 1 or int(dd) > 31:
            return False
    elif int(mm) in (4,6,9,11):
        if int(dd) < 1 or int(dd) > 30:
            return False
    return True