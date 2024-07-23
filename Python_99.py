def closest_integer(value):
    num = float(value)
    if num % 1 == 0:
        return int(num)
    elif num > 0:
        return int(round(num))
    else:
        return int(round(num)) * -1