def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int) -> (int, int):
        if a == 0:
            return b, 0, 1
        else:
            gcd, x, y = extended_euclidean(b % a, a)
            return gcd, y, x - (b // a) * y

    gcd, _, _ = extended_euclidean(p, p)
    if (p - 1) % gcd == 0:
        inv_p = 1
    else:
        raise ValueError(f"{p} is not invertible modulo {p}")
    return pow(n, inv_p, p)