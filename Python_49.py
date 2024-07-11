```
def """Modular Power (modp)""":
    def extended_euclidean(a: int, b: int) -> (int, int):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = extended_euclidean(b % a, a)
            return gcd, x - (b // a) * y, y

    _, x, _ = extended_euclidean(p, p)
    if (p - 1) % x == 0:
        inv_p = x
    else:
        raise ValueError(f"{p} is not invertible modulo {p}")
    return pow(n, inv_p, p)