```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if (month in [1, 3, 5, 7, 8, 10, 12] and day > 31) or \
       (month in [4, 6, 9, 11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    return True

print("Enter date (yyyy-mm-dd):")
date = input()
if not date.replace('-', '').isnumeric() or len(date.split('-')) != 3:
    print("Invalid format. Please enter the date in yyyy-mm-dd format.")
else:
    if valid_date(date):
        print(f"The date {date} is valid.")
    else:
        print(f"The date {date} is not valid.")