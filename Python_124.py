```python
def valid_date():
    date = input("Enter a date (YYYY-MM-DD): ")
    day, month, year = date.split('-')
    if len(date) != 10 or not all(part.isdigit() for part in date.split('-')):
        print("Invalid date format. Please use YYYY-MM-DD.")
    elif int(month) < 1 or int(month) > 12:
        print("Month must be between 1 and 12.")
    else:
        days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
        if int(month) == 2 and (int(day) < 1 or int(day) > 29):
            print("Invalid day. February only has 28 or 29 days.")
        elif int(month) in [4,6,9,11] and (int(day) < 1 or int(day) > 30):
            print("Invalid day. April, June, September, November only have 30 days.")
        elif int(month) in [1,3,5,7,8,10,12] and (int(day) < 1 or int(day) > 31):
            print("Invalid day. January, March, May, July, August, October, December only have 31 days.")
        else:
            print(f"{date} is a valid date.")