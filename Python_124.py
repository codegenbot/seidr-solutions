```Python
def valid_date():
    while True:
        try:
            date = input("Enter a date (DD-MM-YYYY): ")
            day, month, year = date.split('-')
            if len(day) == 1:
                day = '0' + day
            if len(month) == 1:
                month = '0' + month
            if int(month) < 1 or int(month) > 12:
                print("Invalid month. Please enter a month between 1 and 12.")
                continue
            days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
            if int(month) == 2:
                if int(day) < 1 or int(day) > days_in_month[1]:
                    print("Invalid day for February. Please enter a day between 1 and 28.")
                    continue
            elif int(month) in [4,6,9,11]:
                if int(day) < 1 or int(day) > days_in_month[3]:
                    print("Invalid day for month {}. Please enter a day between 1 and {}.".format(month, days_in_month[3]))
                    continue
            else:
                if int(day) < 1 or int(day) > days_in_month[0]:
                    print("Invalid day. Please enter a day between 1 and {}.".format(days_in_month[0]))
                    continue
            return True
        except ValueError:
            print("Invalid date format. Please enter a date in the format DD-MM-YYYY.")