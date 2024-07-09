def closest_integer(value):
    num = float(value)
    return round(num) if abs(round(num) - num) < 0.5 else int(num + 0.5)