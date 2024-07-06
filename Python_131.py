def digits(n):
    if n < 0:
        return -1
    elif n < 10:
        return int(str(n)[0])
    else:
        return max([int(digit) for digit in str(n)])