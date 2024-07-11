```
def valid_date(date):
    year, month, day = map(int, date.split("-"))
    if month < 1 or month > 12:
        return False
    if day < 1 or day > 31:
        return False
    if month in [4, 6, 9, 11] and day > 30:
        return False
    if month == 2 and (day < 1 or day > 29):
        return False
    return True

if __name__ == "__main__":
    while True: 
        print("Enter date (yyyy-mm-dd):")
        date = input()
        while not date.strip():
            print("Program did not receive expected input. Please try again.")
            date = input()

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
                    break