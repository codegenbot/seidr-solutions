def circular_shift(x, shift):
    str_x = str(x)[::-1]
    return str(
        int(str_x[int(len(str_x) - shift) :]) + int(str_x[: int(len(str_x) - shift)])
    )