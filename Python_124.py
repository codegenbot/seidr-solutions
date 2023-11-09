
def valid_date(date):
    """You have to write a function which validates a given date string and
    returns True if the date is valid otherwise False.
    The date is valid if all of the following rules are satisfied:
    1. The date string is not empty.
    2. The number of days is not less than 1 or higher than 31 days for months 1,3,5,7,8,10,12. And the number of days is not less than 1 or higher than 30 days for months 4,6,9,11. And, the number of days is not less than 1 or higher than 29 for the month 2.
    3. The months should not be less than 1 or higher than 12.
    4. The date should be in the format: mm-dd-yyyy

    for example: 
    valid_date('03-11-2000') => True

    valid_date('15-01-2012') => False

    valid_date('04-0-2040') => False

    valid_date('06-04-2020') => True

    valid_date('06/04/2020') => False
    """

    # Complete the following code
    if date == "":
        return False
    else:
        date_split = date.split("-")
        if len(date_split) != 3:
            return False
        else:
            month = int(date_split[0])
            day = int(date_split[1])
            year = int(date_split[2])
            if month > 12 or month < 1 or day < 1 or day > 31 or year < 0:
                return False
            else:
                if month == 2 and year % 4 == 0 and day > 29:
                    return False
                elif month == 2 and year % 4 != 0 and day > 28:
                    return False
                elif month == 4 or month == 6 or month == 9 or month == 11 and day > 30:
                    return False
                else:
                    return True


def main():
    print(valid_date('03-11-2000'))
    print(valid_date('15-01-2012'))
    print(valid_date('04-0-2040'))
    print(valid_date('06-04-2020'))
    print(valid_date('06/04/2020'))


if __name__ == "__main__":
    main()
