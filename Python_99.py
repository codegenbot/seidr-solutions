```
def closest_integer(value):
    value = float(value)
    if value == int(value):
        return int(value)
    elif value > 0:
        if (int(value) - value) < (value - int(value) + 1):
            return int(value)
        else:
            return int(value) + 1
    else:
        if (value - int(value)) < (int(value) - value + 1):
            return int(value)
        else:
            return int(value) - 1