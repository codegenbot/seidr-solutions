```
def modp(n: int, p: int):
    return n % p if n > 0 else (n < 0).int().__reversed__().next() % p