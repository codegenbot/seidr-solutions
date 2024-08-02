def check_date():
    date = input("Enter a date (mm-dd-yyyy): ")
    mm_dd_yyyy = date.replace("-", "")
    if len(mm_dd_yyyy) != 8:
        print("Invalid date format")
    else:
        month, day, year = map(int, (mm_dd_yyyy[:2], mm_dd_yyyy[2:4], mm_dd_yyyy[4:]))
        if not (1 <= month <= 12):
            print("Invalid month")
        elif not (
            1 <= day <= [31, 28, 29, 30, 31, 30, 31, 31, 30, 31, 30, 31][month - 1]
        ):
            print("Invalid day")
        else:
            print(f"The date {date} is valid.")