def closest_integer(value):
    num = float(value)
    if abs(num) % 1 < 0.5:
        return int(round(num))
    elif num > 0:
        return int(num) + 1
    else:
        return int(num) - 1