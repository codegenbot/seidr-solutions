def count_up_to(n):
    if n < 2:
        return []
    
    primes = []
    for num in range(2, n):
        if all(num % i != 0 for i in range(2, int(num ** 0.5) + 1)):
            primes.append(num)
    
    return primes