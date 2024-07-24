def closest_integer(value):
    num = float(value)
    if num % 1 < 0.5:
        return int(num)
    else:
        return int(round(num))