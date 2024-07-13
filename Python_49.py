import math

def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = pow(n, 1-(p-1), p)
    if phi_val == 1:
        return -1
    else:
        return phi_val