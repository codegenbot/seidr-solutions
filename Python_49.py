def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    if pow(n, ((p - 1) // 2), p) == 1 or pow(n, (p - 1), p) == 1:
        return -1
    else:
        return min(((p - 1) // 2) + 1, p)