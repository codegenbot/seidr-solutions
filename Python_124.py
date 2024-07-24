```Python
def valid_date():
    date = input("Enter a date in the format YYYY-MM-DD: ")
    if not date.replace('-', '').isdigit():
        return "Invalid date."
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    if int(month) < 1 or int(month) > 12:
        return "Invalid month."
    if (int(month) in [4,6,9,11] and int(day) > 30) or (int(month) == 2 and int(day) > 29):
        return "Invalid date."
    if int(day) < 1 or int(day) > 31:
        return "Invalid day."
    return "Valid date."

print(valid_date())