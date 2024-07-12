```
def is_multiply_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        while n % i == 0:
            j = n // i
            if not is_prime(i) or not is_prime(j):
                break
            return True
    return False