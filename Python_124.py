def get_valid_date():
    date = input("Enter a date (YYYY-MM-DD): ")
    if valid_date(date):
        print("The date is valid.")
    else:
        print("The date is not valid.")