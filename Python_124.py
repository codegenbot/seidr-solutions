def is_valid_date(date):
    try:
        day, month, year = map(int, date.split('-'))
        if month < 1 or month > 12:
            return False
        if not ((month % 4 == 0 and month % 100 != 0) or month in [1,3,5,7,8,10,12]) and day > 31:
            return False
        elif (month % 4 == 0 and month % 100 != 0) and day > 29:
            return False
        elif month == 2 and day > 29:
            return False
        else:
            return True
    except ValueError:
        return False