```
def gcd(a, b):
    while b:
        a, b = b, a % b
    if a == 0 or b == 0:  
        return 1
    else:
        return abs(a)