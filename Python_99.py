```
def closest_integer(value):
    num = float(value)
    if abs(num - int(num)) < abs(num - math.floor(num)):
        return int(math.ceil(num))
    else:
        return int(num)