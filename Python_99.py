```
def closest_integer(value):
    num = float(value)
    if num % 1 == 0:
        return int(num)
    elif num > 0:
        return int(num) + (1 - num % 1) > 0
    else:
        return int(num) - (num % 1) < 0