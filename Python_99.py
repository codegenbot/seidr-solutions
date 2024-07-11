def closest_integer(value):
    num = float(value)
    if num >= 0:
        if round(num) == num:
            return int(num)
        elif round(num) < num:
            return int(num)
        else:
            return int(num + 1)
    else:
        if round(-num) == -num:
            return int(num)
        elif round(-num) > -num:
            return int(num)
        else:
            return int(num - 1)