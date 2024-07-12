def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def is_fib(num):
        a, b = 0, 1
        while a < num:
            a, b = b, a + b
        return a == num

    count = 0
    num = 2
    while count < n:
        if is_fib(num) and is_prime(num):
            count += 1
        num += 1
    return num - 1