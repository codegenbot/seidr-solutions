```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

print(gcd(661344, 15686))