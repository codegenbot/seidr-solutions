def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

print(gcd(182041, 626624))