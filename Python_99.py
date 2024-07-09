def closest_integer(value):
    num = float(value)
    if num == int(num):
        return int(num)
    elif num > 0:
        return int(num) + 1 if num % 1 >= 0.5 else int(num)
    else:
        return int(num) - 1 if num % 1 < 0.5 else int(num)