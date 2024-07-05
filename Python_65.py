def circular_shift(x, shift):
    digits = str(x)
    n = len(digits)
    if shift >= n:
        return digits[::-1]
    shift %= n
    return digits[-shift:] + digits[:-shift]