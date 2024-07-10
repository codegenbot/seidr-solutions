def closest_integer(value):
    num = float(value)
    if abs(num) % 1 > 0.5:
        return int(round(num)) if num >= 0 else int(round(num))
    return round(num)