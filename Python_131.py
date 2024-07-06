def digits(n):
    if n < 0:
        n = -n
    return max([int(digit) for digit in str(n)])