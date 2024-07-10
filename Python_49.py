def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    if n < 1:
        return 0

    result = 1
    power = n
    while power > 0:
        if power % 2 == 1:
            result = (result * n) % p
        n = (n * n) % p
        power //= 2
    
    return result