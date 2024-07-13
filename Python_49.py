import math

def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = (p - sum(1 for a in range(2, int(math.sqrt(p)) + 1) if p % a == 0 and all(p % i > 0 for i in range(2, int(math.sqrt(p)) + 1) if i != a and p % i == 0)))
    if pow(n, phi_val, p) == 1:
        return phi_val
    else:
        return -1