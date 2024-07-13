def valid_date(date):
    day, month, year = date.split('-')
    if len(month) < 1 or len(day) < 1 or len(str(year)) != 4:
        return False
    if int(month) > 12 or int(day) > {'Jan':31, 'Feb':28, 'Mar':31, 'Apr':30, 'May':31, 'Jun':30, 'Jul':31, 'Aug':31, 'Sep':30, 'Oct':31, 'Nov':30, 'Dec':31}[month[:3]].day:
        return False
    if int(month) == 2 and (int(day) > 29 or (int(year)%4 !=0 and int(day) > 28)):
        return False
    return True