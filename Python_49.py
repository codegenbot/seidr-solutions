def modp(n: int, p: int):
    if p == 2:
        return n % p
    elif p == 3:
        return pow(n, (p - 1), p)
    else:
        if is_prime(p) and is_primitive_root(n, p):
            return pow(n, (p - 1) // 2, p) ** 2 % p
        else:
            for i in range(2, int(p ** 0.5) + 1):
                if pow(n, i, p) == 1:
                    return i
            return pow(n, p - 1, p)

def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def is_primitive_root(n: int, p: int) -> bool:
    for i in range(2, p):
        if pow(n, (p - 1) // i, p) == 1:
            return False
    return True