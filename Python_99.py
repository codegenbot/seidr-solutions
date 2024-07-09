```
def closest_integer(value):
    value = float(value)
    if abs(int(value) - value) < abs(value - int(value) + 1):
        return int(value)
    else:
        return int(round(value))