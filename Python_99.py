def closest_integer(value):
    return int(float(value) + 0.5) if float(value) > 0 else int(float(value) - 0.5)