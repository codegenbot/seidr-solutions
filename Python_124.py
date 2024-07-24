```
def valid_date(date=None):
    while True:
        if date is None:
            date = input("Enter a date in the format YYYY-MM-DD: ")
        if len(date) != 10 or not date.replace("-", "").isdigit():
            print("Invalid date. Please try again.")
            continue
        year, month_day = date.split("-")
        year = int(year)
        if not (1900 <= year <= 2100): 
            print("Invalid year. Please try again.")
            date = None
            continue

        month_day = int(month_day)
        if not (1 <= month_day <= 366): 
            print("Invalid day of the month. Please try again.")
            date = None
            continue

        if month_day > 365: 
            months_with_31_days = [1, 3, 5, 7, 8, 10, 12]
            days_in_months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            for month in range(1, 13):
                if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
                    days_in_months[2] = 29
                elif month == 2:
                    break
                if month in months_with_31_days:
                    if day > days_in_months[month]:
                        print("Invalid day of the month. Please try again.")
                        date = None
                        continue

        if int(month_day / 100) != int(year/100): 
            if len(str(int(month_day/100)))>3: 
                print("Invalid date. Please try again.")
                date = None
                continue
            print("Invalid date. Please try again.")
            date = None
            continue 

        return