```
def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = p
    for a in range(2, int(math.sqrt(p)) + 1):
        if p % a == 0:
            is_prime = True
            for i in range(2, int(math.sqrt(p)) + 1):
                if i != a and p % i == 0:
                    is_prime = False
                    break
            if not is_prime:
                phi_val = math.prod(range(1, p // a + 1), (range(a + 1, p, a)))
    if pow(n, phi_val, p) == 1:
        return phi_val
    else:
        return -1