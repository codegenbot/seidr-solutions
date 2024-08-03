def circular_shift(x, shift):
    return str(int(str(x)[shift % len(str(x)) :] + str(x)[: shift % len(str(x))]))