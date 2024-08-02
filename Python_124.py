```
def valid_date(date):
    mmddyyyy = date.replace('-', '')
    if len(mmddyyyy) != 8:
        return False
    month, day, year = map(int, (mmddyyyy[:2], mmddyyyy[2:4], mmddyyyy[4:]))
    if not (1 <= month <= 12):
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2:
        days_in_month[1] = 29 if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)) else 28
    if not (1 <= day <= days_in_month[month-1]):
        return False
    return True