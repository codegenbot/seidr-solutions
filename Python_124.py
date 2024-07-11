def valid_date(date):
    day, month, year = map(int, date.split("-"))
    if month < 1 or month > 12:
        return False
    elif day < 1 or day > 31:
        return False
    elif (month in [1, 3, 5, 7, 8, 10, 12] and day > 31) or (
        (month == 2) and day > (28 if year % 4 != 0 else 29)
    ):
        return False
    else:
        return True


def main():
    while True:
        print("Enter date (yyyy-mm-dd):")
        try:
            date = input()
            if len(date) != 10 or "-" not in date:
                print("Invalid date format! Please use 'yyyy-mm-dd'.")
            else:
                day, month, year = map(int, date.split("-"))
                if year < 1000 or year > 9999:
                    print("Invalid year! Please enter a year between 1000 and 9999.")
                elif not valid_date(date):
                    print(f"The date {date} is not valid.")
                else:
                    print(f"The date {date} is valid.")
        except ValueError:
            print(
                "Invalid input. Please enter a valid date in the 'yyyy-mm-dd' format."
            )


if __name__ == "__main__":
    main()