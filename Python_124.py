def get_valid_dates():
    dates = input("Enter dates (MM-DD-YYYY) separated by comma: ")
    valid_dates = [
        date for date in dates.split(",") if valid_date(date.replace("-", ""))
    ]
    return ", ".join(valid_dates)