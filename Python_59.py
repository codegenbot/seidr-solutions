```
def largest_prime_factor(n: int):
    def is_prime(m: int):
        if m < 2:
            return False
        for i in range(2, int(m**0.5) + 1):
            if m % i == 0:
                return False
        return True

    max_factor = 1
    for i in range(2, n):
        if n % i == 0 and is_prime(i):
            max_factor = i
    return max_factor