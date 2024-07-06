def digits(n):
    if n < 0:
        return -1
    else:
        return max([int(digit) for digit in str(n)])