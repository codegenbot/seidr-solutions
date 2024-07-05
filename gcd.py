```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

print(gcd(48, 18))
print(gcd(200, 150))
print(gcd(12, 15))
print(gcd(24, 30))
print(gcd(36, 54))