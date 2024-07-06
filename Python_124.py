```
def valid_date():
    date = input("Enter a date in the format YYYY-MM-DD: ")
    day, month, year = date.split('-')
    if len(day) < 1 or len(month) < 1 or len(year) < 4:
        return "Invalid date. Please check your format."
    try:
        int_day = int(day)
        int_month = int(month)
        int_year = int(year)
    except ValueError:
        return "Invalid date. Please enter numbers for day and month."
    if int_month < 1 or int_month > 12:
        return "Invalid month. Please choose a number between 1 and 12."
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if int_month == 2 and (int_day < 1 or int_day > 29):
        return "Invalid date. February only has 29 days."
    if int_month in [1,3,5,7,8,10,12] and (int_day < 1 or int_day > 31):
        return "Invalid date. This month only has 31 days."
    if int_month in [4,6,9,11] and (int_day < 1 or int_day > 30):
        return "Invalid date. This month only has 30 days."
    return f"{date} is a valid date."