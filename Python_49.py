```
def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = math.lcm(n, p)
    if pow(n, phi_val, p) == 1:
        return phi_val
    else:
        return -1