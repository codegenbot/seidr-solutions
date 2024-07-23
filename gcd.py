def gcd(a, b):
    if a == 0: 
        return abs(b)
    elif b == 0:
        return abs(a)
    while b: a, b = abs(b), abs(a) % abs(b)
    return a