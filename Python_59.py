```
def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0 and is_prime(i):
            return i
        i -= 1

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True