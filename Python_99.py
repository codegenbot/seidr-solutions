```
def closest_integer(value):
    num = float(value)
    if num % 1 == 0:
        return int(num)
    else:
        return round(num) if num > 0 else -round(-num)