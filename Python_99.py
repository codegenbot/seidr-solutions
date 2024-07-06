```
def closest_integer(value):
    value = float(value)
    if value % 1 < 0.5:
        return int(value)
    else:
        return int(round(value))