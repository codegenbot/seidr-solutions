```
def closest_integer(value):
    value = float(value)
    if value >= 0:
        return int(round(value))
    else:
        return int(-round(-value))