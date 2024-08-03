```
def closest_integer(value):
    num = float(value)
    if abs(num - int(num)) < 0.5:
        return round(num) if num >= 0 else round(num + 1)
    return int(num)