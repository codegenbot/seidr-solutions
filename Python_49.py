def modp(n: int, p: int):
    if p == 0:
        return n
    elif n > p:
        k = modp(p, n)
        if (p / k) * (2 ** (k - 1)) + (p % k) >= n:
            return k
        else:
            return modp(n % k, k)
    else:
        if n < p:
            return modp(p, n)
        elif n == p:
            return p