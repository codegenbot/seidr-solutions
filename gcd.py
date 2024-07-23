def gcd(a, b):
    if a == 0 and b == 0: return 1
    while b: a, b = abs(b), abs(a) % abs(b)
    return a