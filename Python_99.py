```
def closest_integer(value):
    num = float(value)
    if num % 1 == 0:
        return int(num)
    elif num > 0:
        return round(num)
    else:
        return -round(-num)