```
def closest_integer(value):
    num = float(value)
    if num % 1 == 0:
        return int(num)
    elif num > 0:
        return int(num) + (0 if num - int(num) < 0.5 else 1)
    else:
        return int(num) - (0 if abs(num) - int(abs(num)) < 0.5 else 1)