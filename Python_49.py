```
def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = p
    for i in range(2, int(math.sqrt(p)) + 1):
        if p % i == 0:
            is_prime = True
            for j in range(2, int(math.sqrt(i)) + 1):
                if i % j == 0 and j != i:
                    is_prime = False
                    break
            if not is_prime:
                phi_val -= (p // i - (i > 1))
    if pow(n, phi_val, p) == 1:
        return phi_val
    else:
        return -1