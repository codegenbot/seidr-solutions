```
def closest_integer(value):
    num = float(value)
    if abs(num) % 1 > 0.5:
        return int(num + 0.5) if num >= 0 else int(num - 0.5)
    return round(num)