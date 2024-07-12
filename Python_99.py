```
def closest_integer(value):
    value = float(value)
    if abs(int(value) - value) < abs(int(value + 1) - value):
        return int(value)
    else:
        return int(round(value))