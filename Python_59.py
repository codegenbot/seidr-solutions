def largest_prime_factor(n: int):
    # Find all prime factors of n
    prime_factors = []
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            prime_factors.append(i)

    # Return the largest prime factor
    return max(prime_factors)