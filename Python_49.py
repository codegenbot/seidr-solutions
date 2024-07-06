def modp(n: int, p: int):
    if n < 0:
        return modp(-n, p) % p
    if p == 2:
        return n % p
    if n == 0:
        return 0
    if n == 1 or p == 1:
        return n
    if (p-1) & 1:  # p is odd
        if pow(n, p-1, p) == 1:
            return n % p
        for i in range(2, p):
            if pow(n, i*p - i, p) == 1:
                return n % p
        return n
    else:  # p is even
        if pow(n, p//2, p) == 1:
            return n % p
        for i in range(2, p//2 + 1):
            if pow(n, i*p - i, p) == 1:
                return n % p
        return n