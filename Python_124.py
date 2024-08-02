def check_validity():
    date = input("Enter a date (mm-dd-yyyy): ")
    if valid_date(date):
        print("The date is valid.")
    else:
        print("The date is not valid.")


def valid_date(date):
    mm_dd_yyyy = date.replace("-", "")
    if len(mm_dd_yyyy) != 8:
        return False
    month, day, year = map(int, (mm_dd_yyyy[:2], mm_dd_yyyy[2:4], mm_dd_yyyy[4:]))
    if not (1 <= month <= 12):
        return False
    days_in_month = [31, 28, 29, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if not (1 <= day <= days_in_month[month - 1]):
        return False
    return True