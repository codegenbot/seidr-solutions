def modp(n: int, p: int) -> int | None:
    if math.gcd(n, p) != 1:
        return None
    a, b = 0, 1
    q = n // p
    r = n % p
    while r != 0:
        t = r
        r = q % r * p
        q, r = t, q
    if q == 1:
        return a
    else:
        return None