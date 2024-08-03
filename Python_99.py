def closest_integer(value):
    num = float(value)
    if num == int(num):
        return int(num)
    elif num > 0:
        return int(round(num))
    else:
        return int(round(num)) - 1 if round(num) % 2 != 0 else int(round(num)) + 1