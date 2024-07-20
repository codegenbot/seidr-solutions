```
def gcd(a, b):
    a = abs(a)
    b = abs(b)
    while b:
        a, b = b, a % b
    return a


a = int(input())
b = int(input())
print(gcd(a, b))