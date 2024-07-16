def gcd(a, b):
    if a == 0:
        return abs(b)
    elif b == 0:
        return abs(a)
    while b != 0:
        a, b = b, a % b
    return abs(a)

print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))