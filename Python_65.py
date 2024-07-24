def circular_shift(x, shift):
    x = str(x)[::-1]
    shift %= len(x)
    return x[shift:] + x[:shift]