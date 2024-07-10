def circular_shift(x, shift):
    str_x = str(x)[::-1]
    return (
        str(int(str_x[-shift:]) + int(str_x[:-shift]))
        if shift > len(str_x)
        else str_x[shift % len(str_x) :] + str_x[: shift % len(str_x)]
    )