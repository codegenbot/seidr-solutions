```
def valid_date(date):
    while True:
        input_date = input("Enter a date in the format YYYY-MM-DD: ")
        if len(input_date) != 10 or not input_date.replace("-", "").isdigit():
            return False
        year, month_day = input_date.split("-")
        year = int(year)
        if not (1900 <= year <= 2100):
            return False

        month_day = int(month_day)
        if not (1 <= month_day <= 366):

            months_with_31_days = [1, 3, 5, 7, 8, 10, 12]
            days_in_months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            for month in range(1, 13):
                if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
                    days_in_months[2] = 29
                elif month == 2:
                    break
                if month in months_with_31_days:
                    if month_day > days_in_months[month]:
                        return False

        if int(month_day / 100) != int(year/100): 
            return False

        return True