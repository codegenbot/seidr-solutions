def is_multiply_prime(a):
    primes = []
    for i in range(2, a):
        if a % i == 0:
            primes.append(i)
            a = a // i
            if len(primes) == 3:
                return True
    return False