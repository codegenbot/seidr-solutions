def is_multiply_prime(a):
    primes = [2, 3, 5]
    for prime in primes:
        while a % prime == 0:
            a //= prime
    return a == 1