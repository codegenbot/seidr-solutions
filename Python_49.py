```
def modp(n: int, p: int):
    if not is_prime(p):
        return None
    if gcd(n, p) == 1:
        return pow(n, (p - 1), p)
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True