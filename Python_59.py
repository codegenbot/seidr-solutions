
def largest_prime_factor(n):
    # Initialize a list to hold the prime factors
    prime_factors = []
    
    # Iterate from 2 to the square root of n
    for i in range(2, int(n**0.5) + 1):
        # If n is divisible by i and i is prime, add i to the list of prime factors
        if n % i == 0 and is_prime(i):
            prime_factors.append(i)
    
    # Return the largest prime factor, which is the last element in the list
    return prime_factors[-1]

def is_prime(n):
    # Check if n is less than or equal to 1 or divisible by 2
    if n <= 1 or n % 2 == 0:
        return False
    
    # Iterate from 3 to the square root of n in increments of 2
    for i in range(3, int(n**0.5) + 1, 2):
        # If n is divisible by i, it is not prime
        if n % i == 0:
            return False
    
    # If the loop completes and no factors are found, n is prime
    return True
