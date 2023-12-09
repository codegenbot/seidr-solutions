[PYTHON]
def valid_date(date):
    month, day, year = date.split('-')
    month = int(month)
    day = int(day)
    year = int(year)
    if month < 1 or month > 12:
        return False
    if day < 1 or day > 31:
        return False
    if month in [4, 6, 9, 11] and day == 31:
        return False
    if month == 2 and (day > 28 or (day == 29 and year % 4 != 0)):
        return False
    return True
[/PYTHON]
[TESTS]
# Test case 1:
assert valid_date('03-11-2000') == True
# Test case 2:
assert valid_date('15-01-2012') == False
# Test case 3:
assert valid_date('04-0-2040') == False
# Test case 4:
assert valid_date('06-04-2020') == True
# Test case 5:
assert valid_date('06/04/2020') == False
[/TESTS]
