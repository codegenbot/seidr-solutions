def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a if a > b else b

print(gcd(432690, 727257))