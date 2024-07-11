def extended_euclidean(a: int, b: int) -> (int, int):
    if a == 0:
        return b, 0
    else:
        gcd, y, x = extended_euclidean(b % a, a)
        return gcd, y - (b // a) * x, x