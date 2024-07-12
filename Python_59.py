def largest_prime_factor(n: int):
    def is_prime(p: int) -> bool:
        if p < 2:
            return False
        for i in range(2, int(p**0.5)+1):
            if p % i == 0:
                return False
        return True

    factor = n // 2
    while factor > 1:
        if is_prime(factor) and n % factor == 0:
            return factor
        factor -= 1
    return 2