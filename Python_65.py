def circular_shift(x, shift):
    str_x = str(x)[::-1]
    return str_x[-shift % len(str_x) :] + str_x[: -shift % len(str_x)]