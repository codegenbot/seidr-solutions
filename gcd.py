def gcd(a, b):
    if a == 0 or b == 0:
        return max(a, b)
    while b:
        a, b = b, a % b
    return a