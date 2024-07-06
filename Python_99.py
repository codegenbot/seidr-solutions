def closest_integer(value):
    num = float(value)
    if num > 0:
        return int(num)
    else:
        return int(round(num))