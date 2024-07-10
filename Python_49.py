```
def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n
    else:
        result = pow(n, p-1, p)
        if result == 1 and is_prime(p):
            return pow(n, -1, p)
        for i in range(2, p):
            result = (result * n) % p
        return result

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True