def valid_date(*args):
    if len(args) > 0:
        date = args[0]
    else:
        date = input("Enter a date in YYYY-MM-DD format: ")
    
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if (month in [1, 3, 5, 7, 8, 10, 12] and day > 31) or (month in [4, 6, 9, 11] and day > 30) or (month == 2 and day > 29):
        return False
    return True