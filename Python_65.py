def circular_shift(x, shift):
    str_x = str(x)[::-1]
    return str(int(str_x) >> (len(str_x) - shift)) % 10 ** len(str_x)