def gcd(a, b):
    while b != 0:
        a, b = abs(b), abs(a) % abs(b)
    return a


print(gcd(1, 1))