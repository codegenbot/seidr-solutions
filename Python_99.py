def closest_integer(value):
    value = float(value)
    if value == int(value):
        return int(value)
    elif (value % 1) > 0.5:
        return int(value) + 1
    else:
        return int(value) - 1