def is_multiply_prime(a):
    # Find all prime numbers up to a using Sieve of Eratosthenes
    primes = [True] * (a + 1)
    for i in range(2, int(a**0.5) + 1):
        if primes[i]:
            for j in range(i * i, a + 1, i):
                primes[j] = False

    # Check if any two prime numbers multiply to equal a
    for i in range(2, int(a**0.5) + 1):
        if primes[i] and primes[a // i]:
            return True
    return False