def digits(n):
    n = str(abs(n))
    return max(int(digit) for digit in n)