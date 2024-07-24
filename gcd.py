def gcd(a, b):
    while b:
        a, b = b, a % b
    return 1