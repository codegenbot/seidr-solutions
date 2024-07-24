```
def closest_integer(value):
    value = float(value)
    if value % 1 == 0:
        return int(value)
    elif value > 0:
        return int(round(value))
    else:
        return -int(round(-value))