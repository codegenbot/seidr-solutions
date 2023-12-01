def largest_prime_factor(n: int):
    for i in range(2, int(n**0.5) + 1):
        while n % i == 0:
            n //= i
    return n