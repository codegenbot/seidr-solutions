```
def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n
    else:
        result = pow(n, (p-1) // n.bit_length(), p)
        return n * result % p