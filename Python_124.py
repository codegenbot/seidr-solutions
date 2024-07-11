```
def valid_date(date):
    year, month, day = map(int, date.split("-"))
    if (year < 1 or year > 9999) or (month < 1 or month > 12) or (day < 1 or day > 31):
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    return True

while True:
    print("Enter date (yyyy-mm-dd):")
    try:
        date = input()
    except EOFError:
        print("Thanks for playing!")
        break

    while True: 
        if len(date) != 10 or "-" not in date:
            print("Invalid date format! Please use 'yyyy-mm-dd'.")
            date = input()
        else:
            try:
                year, month, day = map(int, date.split("-"))
            except ValueError:
                print("Invalid date input! Please enter a valid date (yyyy-mm-dd).")
                date = input()
            else:
                if not valid_date(date):
                    print(f"The date {date} is not valid.")
                else:
                    print(f"The date {date} is valid.")
                    break