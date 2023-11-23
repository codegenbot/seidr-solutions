def circular_shift(x, shift):
    x = str(x)
    shift %= len(x)
    if shift == 0:
        return x
    return x[-shift:] + x[:-shift]