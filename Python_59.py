def largest_prime_factor(n: int):
    if n <= 1:
        return 1
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0 and is_prime(i):
            return i
    return 1