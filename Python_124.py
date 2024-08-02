def valid_date(date):
    day, month, year = date.split("-")
    if len(day) == 1:
        day = "0" + day
    if len(month) == 1:
        month = "0" + month
    return (
        len(date) == 10
        and int(year) > 0
        and int(month) >= 1
        and int(month) <= 12
        and (
            int(month) in [1, 3, 5, 7, 8, 10, 12]
            and 1 <= int(day) <= 31
            or int(month) in [4, 6, 9, 11]
            and 1 <= int(day) <= 30
            or int(month) == 2
            and 1 <= int(day) <= 29
        )
    )