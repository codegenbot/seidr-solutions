```
def valid_date(date):
    year, month, day = date.split("-")
    if not (year.isdigit() and month.isdigit() and day.isdigit()):
        return False
    if int(year) < 1000 or int(month) < 1 or int(day) < 1:
        return False
    if int(month) > 12 or int(day) > 31:
        return False
    return True

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

if __name__ == "__main__":
    main()