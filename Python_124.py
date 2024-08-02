def get_valid_dates():
    dates = []
    while True:
        user_date = input("Enter a date (MM-DD-YYYY) or 'q' to quit: ")
        if user_date.lower() == "q":
            break
        if valid_date(user_date):
            dates.append(user_date)
        else:
            print(f"Invalid date. Please enter a valid date in MM-DD-YYYY format.")
    return dates