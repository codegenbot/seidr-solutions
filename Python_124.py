```
def valid_date(date):
    from datetime import datetime
    try:
        datetime.strptime(date, '%m-%d-%Y')
        month = int(date[:2])
        day = int(date[3:5])
        year = int(date[6:])
        
        if month < 1 or month > 12:
            return False
        
        if (month in [1,3,5,7,8,10,12] and day > 31) or \
           (month in [4,6,9,11] and day > 30) or \
           (month == 2 and day > 29):
            return False
        
        return True
    except ValueError:
        return False