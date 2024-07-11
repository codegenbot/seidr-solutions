```
def closest_integer(value):
    value = float(value)
    if value == int(value):
        return int(value)
    elif value > 0:
        return int(value) + (1 if value % 1 >= 0.5 else 0)
    else:
        return int(value) - (1 if -value % 1 < 0.5 else 0)