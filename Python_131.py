from math import fabs


def digits(n):
    if n < 0:
        return max([int(digit) for digit in str(fabs(n))])
    else:
        return max(int(digit) for digit in str(n))