def gcd(a, b):
    while b:
        a, b = b, a % b
    if a == 1 or b == 1:
        return 1
    return a