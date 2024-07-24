```
def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0 and is_prime(i):
            return i
        i -= 1

def is_prime(k: int):
    if k < 2:
        return False
    for d in range(2, int(k**0.5) + 1):
        if k % d == 0:
            return False
    return True