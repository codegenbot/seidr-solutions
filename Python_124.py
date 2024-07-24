def valid_date(date):
    day_month_year = map(int, date.split('-'))
    day, month = day_month_year[0], day_month_year[1]
    year_str = str(day_month_year[2])
    if len(year_str) != 4:
        return False
    year = int(year_str)
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or \
       (month in [4,6,9,11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    return True