def prime_fib():
    n = int(input("Enter the value of n:"))

    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num):
            if num == fibonacci(count):
                count += 1
    return num