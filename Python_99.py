def closest_integer_to_month():
    months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
    month_number = int(input("Enter the number of the month (1-12): "))
    if month_number < 1 or month_number > 12:
        return "Invalid input. Please enter a number between 1 and 12."
    else:
        return months[month_number - 1]

closest_integer = closest_integer_to_month()
check(closest_integer)