def valid_date(date):
    day, month, year = map(int, date.split("-"))
    if len(str(day)) == 1:
        day = "0" + str(day)
    if len(str(month)) == 1:
        month = "0" + str(month)
    return 1 <= month <= 12 and (
        month in [4, 6, 7, 8, 9, 10, 11]
        and 1 <= day <= 30
        or month in [1, 3, 5, 12]
        and 1 <= day <= 31
        or month == 2
        and (
            (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0))
            and 1 <= day <= 29
            or day >= 30
        )
    )