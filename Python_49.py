```
def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n % p
    else:
        g = gcd(n, p)
        result = pow(n // g, p - 1, p)
        if g > 1:
            result = (n % p) * pow(result, g, p) % p
        return result

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a