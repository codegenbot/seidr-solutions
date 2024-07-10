def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    if p == 0:
        return "Error! Division by zero is not allowed."
    else:
        return n % p