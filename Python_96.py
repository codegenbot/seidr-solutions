def count_up_to(n):
    # Initialize a boolean array to keep track of prime numbers
    is_prime = [True] * (n + 1)
    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            # If i is prime, mark all its multiples as composite
            for j in range(i * i, n + 1, i):
                is_prime[j] = False
    # Return a list of all prime numbers up to n
    return [i for i in range(2, n + 1) if is_prime[i]]