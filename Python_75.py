def is_multiply_prime(n):
    if n < 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0 and is_prime(i) and is_prime(n // i):
            return True
    return False
```