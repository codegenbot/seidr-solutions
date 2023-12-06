```
def is_prime(n: int):
    if n < 2:
        return False
    for i in range(2, n + 1):
        if n % i == 0:
            return False
    return True

def largest_prime_factor(n: int):
    for i in range(2, n + 1):
        if n % i == 0 and is_prime(i):
            return i
```