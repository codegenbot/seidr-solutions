def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fibonacci():
        a, b = 0, 1
        while True:
            yield a
            a, b = b, a + b

    count = 0
    for num in fibonacci():
        if is_prime(num):
            count += 1
            if count == n:
                return num