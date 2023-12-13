[PYTHON]
def isValidDate(date):
    month, day, year = date.split('-')
    month = int(month)
    day = int(day)
    year = int(year)

    if month < 1 or month > 12:
        return False
    if day < 1 or day > 31:
        return False
    if year < 0:
        return False

    daysInMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and year % 4 == 0:
        daysInMonth[month-1] = 29

    return day <= daysInMonth[month-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert isValidDate("04-2003") == True
# Test case 2:
assert isValidDate("02-29-2003") == False
# Test case 3:
assert isValidDate("02-28-2003") == True
# Test case 4:
assert isValidDate("02-29-2004") == True
# Test case 5:
assert isValidDate("02-30-2003") == False
[/TESTS]
