def circular_shift(x, shift):
    x = str(x)
    shift = shift % len(x)
    return x[-shift:] + x[:-shift] if shift > 0 else x[::-1]