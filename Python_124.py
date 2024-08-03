def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    month = int(month)
    day = int(day)
    leap_year = (int(year) % 4 == 0 and int(year) % 100 != 0) or int(year) % 400 == 0
    return 1 <= month <= 12 and 1 <= day <= ({1:31, 2:28, 3:31, 4:30, 5:31, 6:30,
                7:31, 8:31, 9:30, 10:31, 11:30, 12:31} if not leap_year
              else {1:31, 2:29, 3:31, 4:30, 5:31, 6:30,
                7:31, 8:31, 9:30, 10:31, 11:30, 12:31})