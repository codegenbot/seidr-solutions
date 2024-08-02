def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def prime_fib(n: int):
    def fibonacci():
        a, b = 0, 1
        for _ in range(n):
            yield a
            a, b = b, a + b

    prime_count = 0
    for num in fibonacci():
        if num > 1 and is_prime(num):
            prime_count += 1
            if prime_count == n:
                return num