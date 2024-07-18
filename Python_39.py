def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def prime_fib(n):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    prime_fibonacci = []
    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fibonacci(num):
            prime_fibonacci.append(num)
            count += 1
    return prime_fibonacci


n = int(input("Enter the value of 'n': "))
print(prime_fib(n))