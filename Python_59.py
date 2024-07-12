```
def largest_prime_factor(n: int):
    i = n // 2
    while i > 1:
        if n % i == 0:
            j = i
            while j <= (n // j):
                if n % j == 0 and is_prime(j):
                    return j
                j += 1
        i -= 1

def is_prime(k: int):
    if k < 2:
        return False
    for d in range(2, int(k**0.5) + 1):
        if k % d == 0:
            return False
    return True