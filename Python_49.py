import math


def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    phi_val = p
    for i in range(2, int(math.sqrt(p)) + 1):
        if p % i == 0:
            j = 2
            while j * i <= p:
                if p % (j * i) == 0:
                    phi_val -= math.gcd(i, p // i)
                j += 1
    for i in range(int(math.sqrt(p)) + 1, p):
        if math.gcd(i, p) == 1:
            phi_val -= 1
    return phi_val if pow(n, phi_val, p) == 1 else -1


print(modp(5, 7))