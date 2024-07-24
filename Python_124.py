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
        try:
            if int(year) % 4 != 0:
                return False
            elif int(year) % 100 == 0:
                if int(year) % 400 != 0:
                    return False
            else:
                if int(month) > 2:
                    return True
        except ValueError:
            return False
    if int(day) < 1 or int(day) > 31:
        return False
    return True