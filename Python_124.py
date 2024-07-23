def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if month in [1,3,5,7,8,10,12]:
        if day < 1 or day > 31:
            return False
    elif month in [4,6,9,11]:
        if day < 1 or day > 30:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    return True

date = input("Enter a date (in YYYY-MM-DD format): ")
print(f"{date} is {'valid' if valid_date(date) else 'not valid'}")