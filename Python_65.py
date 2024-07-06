def circular_shift(x, shift):
    str_x = str(x)[::-1]
    shift %= len(str_x)
    return str_x[shift:] + str_x[:shift]