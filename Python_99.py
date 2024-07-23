```
def closest_integer(value):
    num = float(value)
    if num - int(num) < (1 - int(num)):
        return int(num)
    else:
        return int(round(num))