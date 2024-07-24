def closest_integer(value):
    num = float(value)
    if abs(num) % 1 == 0:
        return int(round(num))
    else:
        return int(round(num)) if num > 0 else -int(round(-num))