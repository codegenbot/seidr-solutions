def modp(n: int, p: int):
    if n % p == 0:
        return "n is a multiple of p"
    else:
        return f"{n} modulo {p} equals {pow(n, -1, p)}"