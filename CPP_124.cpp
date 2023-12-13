[PYTHON]
def is_valid_date(date_string):
    """
    Returns True if the given date string is valid, False otherwise.
    """
    # Split the date string into month, day, and year
    month, day, year = date_string.split("-")
    
    # Check if the month is valid
    if int(month) not in range(1, 13):
        return False
    
    # Check if the day is valid
    if int(day) not in range(1, 32):
        return False
    
    # Check if the year is valid
    if int(year) < 0:
        return False
    
    # Check if the date is valid
    if int(month) == 2 and int(day) > 28:
        return False
    
    # Check for leap years
    if int(year) % 4 == 0 and int(month) == 2 and int(day) == 29:
        return True
    
    # Check the number of days in each month
    if int(month) in [4, 6, 9, 11] and int(day) == 31:
        return False
    
    return True
[/PYTHON]
[TESTS]
# Test case 1:
assert is_valid_date("02-29-2003") == True
# Test case 2:
assert is_valid_date("04-31-2003") == False
# Test case 3:
assert is_valid_date("02-30-2003") == False
# Test case 4:
assert is_valid_date("02-29-2004") == True
# Test case 5:
assert is_valid_date("04-31-2004") == False
# Test case 6:
assert is_valid_date("02-30-2004") == False
[/TESTS]
```