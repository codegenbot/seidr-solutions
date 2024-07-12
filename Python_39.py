def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        a, b = 0, 1
        for _ in range(n):
            a, b = b, a + b
        return a

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fibonacci(count):
            count += 1
    return num


result = prime_fib(int(input()))
print(result)