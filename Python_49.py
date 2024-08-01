def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a

def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return -1
    return pow(n, p-1, p)