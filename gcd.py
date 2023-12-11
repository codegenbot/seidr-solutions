def gcd(a, b):
    if a == b:
        return 1
    while b != 0:
        a, b = b, a % b
    return a
