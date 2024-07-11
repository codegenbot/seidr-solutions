import math

def modp(n: int, p: int):
    return int(math.pow(n, 1/p) % p)