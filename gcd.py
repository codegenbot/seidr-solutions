```
def gcd(a, b):
    a = abs(a)
    b = abs(b)
    if a == 0: 
        return b
    elif b == 0:
        return a
    while b != 0: 
        a, b = b, a % b
    return a