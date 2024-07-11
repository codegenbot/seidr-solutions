```
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