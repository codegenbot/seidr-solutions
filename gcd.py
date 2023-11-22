def gcd(a, b):
    a = abs(a)
    b = abs(b)

    if a == 0 or b == 0:
        return min(a, b)

    while b:
        a, b = b, a % b
    return a