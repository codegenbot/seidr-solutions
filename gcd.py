def gcd(a, b):
    if a == 0 and b == 0: return 0
    while b: a, b = abs(b), abs(a) % abs(b)
    return max([a, b])