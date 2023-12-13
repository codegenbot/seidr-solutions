[PYTHON]
def is_valid_date(date_string):
    """
    Returns True if the given date string is valid, False otherwise.
    """
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
    """
    Returns the number of days in the given month and year.
    """
    # February has 29 days in leap years, 28 in other years
    if month == 2:
        return 29 if year % 4 == 0 else 28

    # April, June, September, and November have 30 days
    elif month in [4, 6, 9, 11]:
        return 30

    # All other months have 31 days
    else:
        return 31

def main():
    date_string = "04-2003"
    assert is_valid_date(date_string) == False

if __name__ == "__main__":
    main()
[/PYTHON]

```