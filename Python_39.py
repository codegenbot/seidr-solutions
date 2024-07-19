def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def is_fib(num):
        a, b = 1, 1
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

# Test cases
print(prime_fib(1))  # 2
print(prime_fib(2))  # 3
print(prime_fib(3))  # 5
print(prime_fib(4))  # 13
print(prime_fib(5))  # 89