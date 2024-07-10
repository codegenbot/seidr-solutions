def modp(n: int, p: int) -> int:
    if not isinstance(n, int) or not isinstance(p, int):
        return n**p % p