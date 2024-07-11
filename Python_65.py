def circular_shift(x, shift):
    x = str(x)[::-1]
    if shift > len(x):
        return x
    else:
        return x[-shift:] + x[:-shift]