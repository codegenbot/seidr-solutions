def valid_date(date):
    month, day, year = date.split("-")
    if len(month) == 1:
        month = "0" + month
    if len(day) == 1:
        day = "0" + day
    month = int(month)
    day = int(day)
    return 1 <= month <= 12 and 1 <= day <= {
        1: 31,
        2: 29,
        3: 31,
        4: 30,
        5: 31,
        6: 30,
        7: 31,
        8: 31,
        9: 30,
        10: 31,
        11: 30,
        12: 31,
    }.get(month)