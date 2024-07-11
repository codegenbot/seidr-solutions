```
from datetime import datetime

def valid_date(date):
    try:
        datetime.strptime(date, '%Y-%m-%d')
        return True
    except ValueError:
        return False

def main():
    while True:
        print("Enter date (yyyy-mm-dd):")
        date = input()
        if valid_date(date):
            break
    else:
        print("Invalid date format! Please use 'yyyy-mm-dd'.")

    if not valid_date(date):
        print(f"The date {date} is not valid.")
    else:
        print(f"The date {date} is valid.")