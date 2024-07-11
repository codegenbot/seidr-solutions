```
def prime_fib(n: int):
    a, b = 1, 1
    primes = [1]
    while True:
        a, b = b, a + b
        if b > 1000000:
            break
        if is_prime(b):
            primes.append(b)
        if len(primes) == n:
            return primes[-1]

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True