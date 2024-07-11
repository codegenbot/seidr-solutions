```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if not (1 <= month <= 12) or not (1 <= day <= {31: 1, 2: 28, 3: 31, 4: 30, 5: 31, 6: 30, 7: 31, 8: 30, 9: 31, 10: 30, 11: 31}[month]):
        return False
    return True