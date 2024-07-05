from math import gcd

def modp(a: int, p: int):
    def findModInverse(a, m):
        if gcd(a, m) != 1:
            return None
        b = [0] * (m + 1)
        b[0] = 1
        for i in range(1, m + 1):
            b[i] = (b[i-1] * (p - 2)) % p
        return pow(a, p - 2, p) * b[m] % p

    if p == 1:
        return a % p
    mod_inverse = findModInverse(a, p)
    if mod_inverse is None:
        return a % p
    else:
        return (a * mod_inverse) % p