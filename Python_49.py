```
def modp(n: int, p: int):
    if gcd(n, p) == 1:
        result = pow(n, (p-1)//2, p)
        if n % 2 == 0:
            result = (result * result) % p
        return result
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a