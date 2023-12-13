[PYTHON]
def is_valid_date(date_string):
    # Split the date string into month, day, and year
    month, day, year = date_string.split("-")

    # Check that the month is between 1 and 12
    if not 1 <= int(month) <= 12:
        return False

    # Check that the day is between 1 and 31
    if not 1 <= int(day) <= 31:
        return False

    # Check that the year is greater than or equal to zero
    if not int(year) >= 0:
        return False

    # Check that the day is less than or equal to the number of days in the month
    if int(day) > days_in_month(int(month), int(year)):
        return False

    return True

def days_in_month(month, year):
    # February has 29 days in leap years, 28 in other years
    if month == 2:
        return 29 if year % 4 == 0 else 28

    # April, June, September, and November have 30 days
    elif month in [4, 6, 9, 11]:
        return 30

    # All other months have 31 days
    else:
        return 31
[/PYTHON]
[INST: What is the purpose of the `days_in_month` function?]  The `days_in_month` function is used to determine the number of days in a given month and year. It takes two arguments, `month` and `year`, and returns an integer representing the number of days in that month. The function uses a series of if-else statements to check the value of the `month` argument and return the appropriate number of days for that month. For example, if the `month` is 2 (February), the function will return 29 if the `year` is a leap year (i.e., divisible by 4) or 28 otherwise. Similarly, if the `month` is 4 (April), 6 (June), 9 (September), or 11 (November), the function will return 30, as these months have 30 days. For all other months, the function will return 31, as they have 31 days.