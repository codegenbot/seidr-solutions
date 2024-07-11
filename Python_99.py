def closest_integer(value):
    num = float(value)
    if num >= 0:
        return int(num + (1 - round(num)))
    else:
        return int(num - (round(-num) - 1))