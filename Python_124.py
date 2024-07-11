def get_valid_dates():
    start_date = input("Enter a start date in format YYYY-MM-DD: ")
    end_date = input("Enter an end date in format YYYY-MM-DD: ")
    
    while True:
        if valid_date(start_date.split('-')) and valid_date(end_date.split('-')):
            return f"Start Date: {start_date}, End Date: {end_date}"
        else:
            start_date = input("Invalid dates, enter a new start date: ")
            end_date = input("Invalid dates, enter a new end date: ")