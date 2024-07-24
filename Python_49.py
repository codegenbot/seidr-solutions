def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int) -> tuple:
        if a == 0:
            return b, 0, 1
        else:
            gcd, x, y = extended_euclidean(b % a, a)
            return gcd, y - (b // a) * x, x

    def mod_inverse(a: int, m: int) -> int:
        gcd, x, _ = extended_euclidean(a, m)
        if gcd != 1:
            raise ValueError("Modular inverse does not exist")
        else:
            return x % m

    return (n * mod_inverse(n, p)) % p