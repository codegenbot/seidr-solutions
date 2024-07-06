def digits(n):
    if n < 0:
        return 0
    else:
        return max([int(digit) for digit in str(n)])