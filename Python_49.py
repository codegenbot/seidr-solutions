import math
def modp(n: int, p: int):
    if p == 0:
        return "Denominator cannot be zero"
    else:
        return int(math.pow(n, 1/p) % p)