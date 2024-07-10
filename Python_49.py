import math

def modp(n: int, p: int):
    if n == 0:
        return 0
    elif math.gcd(n, p) != 1:
        return None
    else:
        return pow(n, -1, p)