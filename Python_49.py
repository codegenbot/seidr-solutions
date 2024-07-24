def modp(n: int, p: int):
    if gcd(n, p) != 1:
        raise ValueError("No modular inverse")
    else:

        def extended_gcd(a, b):
            if a == 0:
                return b, 0, 1
            else:
                g, y, x = extended_gcd(b % a, a)
                return g, x - (b // a) * y, y

        g, x, _ = extended_gcd(p, n)
        if g != 1:
            raise ValueError("No modular inverse")
        else:
            return pow(n, p - 2, p) * n % p