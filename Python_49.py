def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n % p
    else:
        result = 1
        while n > 0:
            if n % 2 == 1:
                result = (result * n) % p
            n //= 2
        return result