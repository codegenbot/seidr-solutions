```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        yr = int(year)
        mnth = int(month)
        dy = int(day)
        if not (mnth >= 1 and mnth <= 12):
            return False
        if mnth in [4,6,9,11]:
            if dy > 30 or dy < 1:
                return False
        elif mnth == 2:
            if not ((yr % 4 == 0 and yr % 100 != 0) or (yr % 400 == 0)):
                if dy > 29 or dy < 1:
                    return False
        else:
            if dy > 31 or dy < 1:
                return False
    except ValueError:
        return False
    return True