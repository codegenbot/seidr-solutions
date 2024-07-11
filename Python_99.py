```
def closest_integer(value):
    num = float(value)
    return int(num + 0.5 if num >= 0 else -int(-num - 0.5))