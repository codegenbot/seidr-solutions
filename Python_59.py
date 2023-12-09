def largest_prime_factor(n: int):
    for i in range(2, n+1):
        if n % i == 0 and is_prime(i):
            return i