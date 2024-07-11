def closest_integer(value):
    return int(float(value)) if float(value) % 1 == 0 else round(float(value))