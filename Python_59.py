
def largest_prime_factor(n: int):
    for i in range(int(n**0.5), 1, -1):
        if n % i == 0 and is_prime(i):
            return i
    return 1