def valid_date(date):
    date_list = date.split('-')
    if len(date_list) != 3:
        return False
    month, day, year = map(int, date_list)
    if month < 1 or month > 12:
        return False
    if (month == 2 and (day < 1 or day > 29)) or ((month in [1,3,5,7,8,10,12]) and (day < 1 or day > 31)) or ((month in [4,6,9,11]) and (day < 1 or day > 30)):
        return False
    return True