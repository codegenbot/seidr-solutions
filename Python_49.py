```
def modp(n: int, p: int):
    if n < 0:
        return -1 * modp(-n, p)
    if n == 0:
        return 0
    if pow(n, (p-1)//2, p) != 1:
        return n % p
    if p % 4 == 3 and n % 4 == 3:
        return 1
    return 0