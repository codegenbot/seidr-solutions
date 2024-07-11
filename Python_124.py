def main():
    while True:
        print("Enter date (yyyy-mm-dd):")
        date = input()
        if len(date) != 10 or "-" not in date:
            print("Invalid date format! Please use 'yyyy-mm-dd'.")
        else:
            year, month, day = map(int, date.split("-"))
            if month < 1 or month > 12 or day < 1 or day > 31:
                print("Invalid date format! Please use 'yyyy-mm-dd'.")
            elif (month in [4, 6, 9, 11] and day > 30) or month == 2:
                if year % 4 != 0 or (year % 100 == 0 and year % 400 != 0):
                    print("Invalid date format! Please use 'yyyy-mm-dd'.")
                elif day > 29:
                    print("Invalid date format! Please use 'yyyy-mm-dd'.")
                else:
                    break
            else:
                if day > 28:
                    print("Invalid date format! Please use 'yyyy-mm-dd'.")
                else:
                    break

    if not valid_date(date):
        print(f"The date {date} is not valid.")
    else:
        print(f"The date {date} is valid.")


def valid_date(date):
    try:
        year, month, day = map(int, date.split("-"))
        if (month in [4, 6, 9, 11] and day > 30) or month == 2:
            if month == 2:
                if year % 4 != 0:
                    return False
                elif year % 100 == 0 and year % 400 != 0:
                    return False
                elif day > 29:
                    return False
                else:
                    return True
            else:
                if day > 30:
                    return False
                else:
                    return True
        elif (month in [1, 3, 5, 7, 8, 10, 12] and day > 31) or month < 1 or month > 12:
            return False
        elif day < 1 or day > 31:
            return False
        else:
            return True
    except ValueError:
        return False


if __name__ == "__main__":
    main()