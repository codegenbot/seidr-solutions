```
def valid_date(date):
    """Determine if the given date is valid.
    
    Args:
        date (str): The date in 'month-day-year' format.

    Returns:
        bool: True if the date is valid, False otherwise.
    """
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29):
        if int(year) % 4 != 0: # Check for leap year
            return False
        elif int(year) % 100 == 0:
            if int(year) % 400 != 0:
                return False
        elif int(day) > 29:
            return False
    if int(day) < 1 or int(day) > int({'January':31, 'February':28, 'March':31, 'April':30, 'May':31, 'June':30, 'July':31, 'August':31, 'September':30, 'October':31, 'November':30, 'December':31}[month[:3]]):
        return False
    return True