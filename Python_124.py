```
def valid_date(date):
    while True:
        if len(date) != 10 or not date.replace("-", "").isdigit():
            return
        year, month_day = date.split("-")
        year = int(year)
        if not (1900 <= year <= 2100):
            return

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
                        return

        if int(month_day / 100) != int(year/100): 
            return

        return date