```
def closest_integer(value):
    num = float(value)
    if num >= 0:
        return int(num + (1 if num % 1 > 0 else 0))
    else:
        return int(num - (1 if num % 1 < 0 else 0))