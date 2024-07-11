def main():
    while True:
        print("Enter date (yyyy-mm-dd):")
        date = input()
        if len(date) != 10 or "-" not in date:
            print("Invalid date format! Please use 'yyyy-mm-dd'.")
        else:
            if not valid_date(date):
                print(f"The date {date} is not valid.")
            else:
                print(f"The date {date} is valid.")
            break


def valid_date(date):
    year, month, day = map(int, date.split("-"))
    if len(str(year)) != 4 or len(str(month)) != 2 or len(str(day)) != 2:
        return False
    if int(str(month)[0]) > 2 and int(str(month)[1]) != 0:
        return False
    if month in [4, 6, 9, 11] and day > 30:
        return False
    elif month == 2:
        if (year % 4) != 0:
            return day <= 28
        else:
            return day <= 29
    else:
        if day > 31:
            return False
    return True


if __name__ == "__main__":
    main()