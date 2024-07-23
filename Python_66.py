def sumOfDigits(n):
    s = str(abs(n))
    while len(s) > 1:
        s = str(sum(int(c) for c in s))
    return int(s)