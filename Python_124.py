def valid_date(date):
    while True:
        if len(date) != 10 or not date.replace("-", "").isdigit():
            print("Invalid input. Please enter a date in the format YYYY-MM-DD: ")
            date = input()
        else:
            year, month_day = date.split("-")
            year = int(year)
            if not (1900 <= year <= 2100):
                print("Year must be between 1900 and 2100. Please try again: ")
                date = input()
                continue
            month_day = int(month_day)
            if not (1 <= month_day <= 366):
                print("Month and day must be between 1 and 366. Please try again: ")
                date = input()
                continue

            months_with_31_days = [1, 3, 5, 7, 8, 10, 12]
            days_in_months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            for month in range(1, 13):
                if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
                    days_in_months[2] = 29
                elif month == 2:
                    break
                if month in months_with_31_days:
                    if month_day > days_in_months[month]:
                        print("Invalid date. Please try again: ")
                        date = input()
                        continue

            if int(month_day / 100) != int(year/100): 
                print("Invalid date. Please try again: ")
                date = input()
                continue
            return