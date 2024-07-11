```
def prime_fib(n: int):
    primes = [1]
    a, b = 1, 1
    while len(primes) < n:
        if is_prime(b):
            primes.append(b)
        a, b = b, a + b
        if b > 1000000:
            break
    return primes[-1]


def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True