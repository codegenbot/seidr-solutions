def gcd(a: int, b: int) -> int:
    if a == 0 or b == 0:
        return abs(a if a < b else b)

    while b != 0:
        a_mod = a % b
        a = b
        b = a_mod

    return a