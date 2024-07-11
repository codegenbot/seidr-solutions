```
while True:
    print("Enter date (yyyy-mm-dd):")
    date = input()
    if len(date) == 10 and '-' in date:
        break
if valid_date(date):
    print(f"The date {date} is valid.")
else:
    print(f"The date {date} is not valid.")