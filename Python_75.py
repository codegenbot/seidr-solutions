def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    while a > 1:
        prime = next((i for i in range(2, a+1) if is_prime(i)), None)
        if prime is None:
            return False
        while a % prime == 0:
            a //= prime
    return a == 1