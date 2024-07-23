def circular_shift(x, shift):
    x = str(x)[::-1]
    if shift >= len(x):
        return x
    else:
        return str(x)[shift:] + str(x)[:shift][::-1]