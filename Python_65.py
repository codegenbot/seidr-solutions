def circular_shift(x, shift):
    x = str(x)
    if len(x) <= shift:
        return x[::-1]
    else:
        return x[-shift:] + x[:-shift]