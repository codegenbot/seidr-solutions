from sys import stdin


def valid_date(date):
    year, month, day = map(int, date.split("-"))

    if not (1 <= year <= 9999) or not (1 <= month <= 12) or not (1 <= day <= 31):
        return False

    if [4, 6, 9, 11].__contains__(month):
        return day <= 30
    elif month == 2:
        return (
            year % 4 == 0
            and day in [20, 21, 22, 23, 24, 25, 26, 27, 28, 29]
            or day <= 27
        )

    return True


def main():
    while True:
        try:
            date = input("Enter date (yyyy-mm-dd):")
        except EOFError:
            print("Thanks for playing!")
            break

        if len(date) != 10 or "-" not in date:
            print("Invalid date format! Please use 'yyyy-mm-dd'.")
        else:
            try:
                year, month, day = map(int, date.split("-"))
            except ValueError:
                print("Invalid date input! Please enter a valid date (yyyy-mm-dd).")
            else:
                if not valid_date(date):
                    print(f"The date {date} is not valid.")
                else:
                    print(f"The date {date} is valid.")


if __name__ == "__main__":
    main()