def closest_integer(value):
    num = float(value)
    if abs(num - int(num)) < 0.5:
        return round(num)
    else:
        return int(num)