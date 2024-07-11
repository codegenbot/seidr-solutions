def prime_fib(n: int):
    def is_prime(num: int):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    a, b = 0, 1
    while b < n:
        if is_prime(b):
            return b
        a, b = b, a + b