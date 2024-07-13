```
def is_valid_date(date_str):
    date_parts = date_str.split('/')
    if len(date_parts) != 3:
        return False
    month, day, year = map(int, date_parts)
    if not (1 <= month <= 12):
        return False
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2:
        days_in_month[1] = 29 if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0) else 28
    if not (1 <= day <= days_in_month[month - 1]):
        return False
    return True