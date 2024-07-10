```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    if int(day) < 1 or int(day) > {'1':31,'3':31,'4':30,'5':31,'6':30,'7':31,'8':30,'9':30,'10':31,'11':30,'12':31}[str(month)]:
        return False
    return True