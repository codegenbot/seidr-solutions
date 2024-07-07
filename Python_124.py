```
def valid_date(date):
    mm_dd_yyyy = date.replace('-', '')
    if len(mm_dd_yyyy) != 8:
        return False
    month, day, year = map(int, (mm_dd_yyyy[:2], mm_dd_yyyy[2:4], mm_dd_yyyy[4:]))
    if not 1 <= month <= 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if month == 2 and day > days_in_month[1]:
        return False
    if (month in [1,3,5,7,8,10,12] and day > days_in_month[0]) or \
       (month in [4,6,9,11] and day > days_in_month[1]) or \
       (month == 2 and day > days_in_month[1]):
        return False
    return True