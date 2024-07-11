def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int) -> (int, int):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = extended_euclidean(b % a, a)
            return gcd, x - (b // a) * y, y

    gcd, inv_n, _ = extended_euclidean(n, p)
    if gcd != 1:
        raise ValueError(f"{n} is not invertible modulo {p}")
    return pow(n, inv_n, p)