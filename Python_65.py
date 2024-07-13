def circular_shift(x, shift):
    x = str(x)[::-1]
    return str(int(x[int(len(x) - shift) % len(x) :])) + str(
        x[: int(len(x) - shift) % len(x)]
    )