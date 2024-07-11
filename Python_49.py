```
def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int) -> (int, int):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = extended_euclidean(b % a, a)
            return gcd, x, y

    _, inv_n, _ = extended_euclidean(n, p)
    if inv_n < 0:
        inv_n += p
    return pow(n, inv_n, p)