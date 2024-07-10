def phi(n: int):
    result = n
    p = 2
    while p * p <= n:
        if n % p == 0:
            while n % p == 0:
                n //= p
            result -= result // p
        else:
            p += 1
    if n > 1:
        result -= 1
    return result

def modp(n: int, p: int):
    if n < 1:
        return pow(n, p - 1, p)
    else:
        return pow(n, phi(n) % (p-1), p)