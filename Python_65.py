def circular_shift(x, shift):
    x_str = str(x)
    shift %= len(x_str)
    return x_str[-shift:] + x_str[:-shift] if shift > 0 else x_str[::-1]