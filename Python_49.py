```
def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n
    else:
        result = 1
        for i in range(1, p-1):
            if pow(n, i, p) == 1:
                return n * (p-1) % p
            result = (result * n) % p
        return result