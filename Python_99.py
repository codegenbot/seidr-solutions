```
def closest_integer(value):
    value = float(value)
    if value % 1 == 0:
        return int(value)
    elif value > 0:
        return int(value) + (0 if value < 0.5 else 1)
    else:
        return int(value) - (0 if value > -0.5 else 1)