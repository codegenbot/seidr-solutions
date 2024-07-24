Here is the modified code:

def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return "Not possible"
    return pow(n, -1, p) * n % p

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a