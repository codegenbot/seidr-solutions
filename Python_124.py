```
def valid_date(date):
    from datetime import datetime
    
    try:
        datetime.strptime(date, '%m-%d-%Y')
        
        month = int(date.split('-')[0])
        day = int(date.split('-')[1])
        
        if (month < 1 or month > 12) or ((month in [4,6,9,11]) and (day<1 or day>30)) or ((month in [1,3,5,7,8,10,12]) and (day<1 or day>31)) or (month == 2 and (day<1 or day>29)):
            return False
        else:
            return True
    
    except ValueError:
        return False