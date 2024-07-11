def gcd(a, b):
    if a == 1 or b == 1:
        return 1
    if b == 0:
        return a
    while b:
        a, b = b, a % b
    return a