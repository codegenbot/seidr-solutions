[PYTHON]
def is_valid_date(date_string):
    """
    Returns True if the date string is valid, False otherwise.
    """
    month, day, year = map(int, date_string.split('-'))
    return month in range(1, 13) and day in range(1, 32) and year > 0
[/PYTHON]
[TESTS]
# Test case 1:
assert is_valid_date("04-2003") == True
# Test case 2:
assert is_valid_date("02-29-2004") == True
# Test case 3:
assert is_valid_date("02-30-2004") == False
# Test case 4:
assert is_valid_date("04-31-2004") == False
# Test case 5:
assert is_valid_date("02-29-2003") == False
[/TESTS]
