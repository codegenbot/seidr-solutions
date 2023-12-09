def largest_prime_factor(n):
    import math
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return i
    return 1