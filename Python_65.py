def circular_shift(x, shift):
    str_x = str(x)
    shifted_str_x = str_x[-shift % len(str_x)] + str_x[: -shift % len(str_x)]
    return shifted_str_x