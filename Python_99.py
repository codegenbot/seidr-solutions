```
def closest_integer(value):
    value = float(value)
    if value - int(value) < (1 - int(value)):
        return int(value)
    else:
        return int(round(value))