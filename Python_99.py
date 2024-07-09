```
def closest_integer(value):
    value = float(value)
    if value == int(value):
        return int(value)
    elif value > 0:
        return round(value)
    else:
        return -round(-value)