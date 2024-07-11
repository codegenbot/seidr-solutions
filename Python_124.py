```
def valid_date(date):
    year, month, day = map(int, date.split("-"))
    if not (100 <= year <= 9999) or not (1 <= month <= 12) or not (1 <= day <= 31):
        return False
    if [4, 6, 9, 11].count(month) and day > 30:
        return False
    if month in [1, 3, 5, 7, 8, 10, 12] and day > 31:
        return False
    if month == 2 and (day > 28 or (year % 4 != 0)):
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