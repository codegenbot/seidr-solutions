def circular_shift(x, shift):
    x = str(x)[::-1]
    return (
        str(int(x[:shift][::-1]) + int(x[shift:][::-1]))[::-1] if len(x) > shift else x
    )