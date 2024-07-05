```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

print(gcd(24, 54))
print(gcd(400000, 4))
print(gcd(3528, 4200))
print(gcd(63550, 820000))