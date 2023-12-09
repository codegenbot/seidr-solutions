def count_up_to(n):
    primes = []
    for i in range(2, n+1):
        if all(i % j != 0 for j in range(2, i)):
            primes.append(i)
    return primes