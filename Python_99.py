```
def closest_integer(value):
    num = float(value)
    if abs(num) % 1 < 0.000001:
        return int(round(num))
    else:
        return round(num)