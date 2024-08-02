def closest_integer(value):
    num = float(value)
    if num > 0:
        return int(num) + (1 if num % 1 >= 0.5 else 0)
    elif num < 0:
        return int(num) - (1 if abs(num) % 1 >= 0.5 else 0)
    else:
        return 0