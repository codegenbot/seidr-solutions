def is_multiply_prime(a):
    primes = [2, 3, 5]
    for prime in primes:
        if a % prime != 0:
            return False
        a //= prime
    return True