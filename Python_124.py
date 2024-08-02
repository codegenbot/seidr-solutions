```
def valid_date(date):
    mm, dd, yyyy = date.split('-')
    month, day, year = int(mm), int(dd), int(yyyy)
    
    if month < 1 or month > 12:
        return False
    elif [4,6,9,11].count(month) and day > 30:
        return False
    elif month == 2 and (day > 29 or not ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)):
        return False
    elif day < 1 or day > {31 if [1,3,5,7,8,10,12].count(month) else 30 if [4,6,9,11].count(month) else 29}:
        return False
    
    return True