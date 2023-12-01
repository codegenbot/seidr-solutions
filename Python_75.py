def is_multiply_prime(a):
    primes = []
    for i in range(2, a):
        if len(primes) == 3:
            break
        if a % i == 0:
            for prime in primes:
                if i % prime == 0:
                    break
            else:
                primes.append(i)
    return len(primes) == 3