def is_multiply_prime(a):
    primes = []
    for i in range(2, a):
        if a % i == 0:
            is_prime = True
            for j in range(2, i):
                if i % j == 0:
                    is_prime = False
                    break
            if is_prime:
                primes.append(i)
    if len(primes) == 3:
        return True
    else:
        return False