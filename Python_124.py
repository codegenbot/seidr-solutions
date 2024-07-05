def valid_date(date):
    if not date:
        return False
    parts = date.split("-")
    if len(parts) != 3:
        return False
    mm, dd, yyyy = parts
    if not (mm.isdigit() and dd.isdigit() and yyyy.isdigit()):
        return False
    mm, dd, yyyy = int(mm), int(dd), int(yyyy)
    if mm < 1 or mm > 12:
        return False
    if mm in {1, 3, 5, 7, 8, 10, 12}:
        return 1 <= dd <= 31
    elif mm in {4, 6, 9, 11}:
        return 1 <= dd <= 30
    elif mm == 2:
        return 1 <= dd <= 29
    return False