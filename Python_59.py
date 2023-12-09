def largest_prime_factor(n):
    # Find the square root of n
    sqrt_n = int(n ** 0.5)
    
    # Check if n is prime
    if n % 2 == 0:
        return 2
    
    # Iterate from 3 to the square root of n in steps of 2
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return i
    
    # If no prime factor is found, return 1
    return 1