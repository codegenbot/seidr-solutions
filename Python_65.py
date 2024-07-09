def circular_shift(x, shift):
    str_x = str(x)[::-1]
    return str(
        int(str_x) if shift >= len(str_x) else int(str_x[-shift:] + str_x[:-shift])
    )