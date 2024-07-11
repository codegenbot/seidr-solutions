```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if month < 1 or month > 12:
        return False
    elif day < 1 or day > 31:
        return False
    elif (month in [1,3,5,7,8,10,12] and day > 31) or (month in [4,6,9,11] and day > 30):
        return False
    else:
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