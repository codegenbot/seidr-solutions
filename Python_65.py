def circular_shift(x, shift):
    x_str = str(x)[::-1]
    return str(int(x_str[-shift:]) + int(x_str[:-shift]))[::-1]