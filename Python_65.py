def circular_shift(x, shift):
    str_x = str(x)[::-1]
    return str(int(str_x[shift % len(str_x) :]) + int(str_x[: shift % len(str_x)]))