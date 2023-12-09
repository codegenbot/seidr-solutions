def count_up_to(n):
    # Initialize a boolean array, is_prime, where is_prime[i] represents whether i is prime.
    is_prime = [True] * (n + 1)
    for p in range(2, int(n ** 0.5) + 1):
        if is_prime[p]:
            # If p is prime, then mark all its multiples as not prime.
            for i in range(p * p, n + 1, p):
                is_prime[i] = False
    # Collect all prime numbers.
    return [p for p in range(2, n + 1) if is_prime[p]]