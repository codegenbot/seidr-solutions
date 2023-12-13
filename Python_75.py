def is_multiply_prime(a):
    primes = []
    
    for i in range(2, a):
        if len(primes) == 3:
            break
        if a % i == 0:
            is_prime = True
            for j in range(2, i):
                if i % j == 0:
                    is_prime = False
                    break
            if is_prime:
                primes.append(i)
    
    return len(primes) == 3