def prime_fib():
    n = int(input("Enter n: "))

    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    i = 0
    while True:
        fib_num = fibonacci(i)
        if is_prime(fib_num):
            n -= 1
            if n == 0:
                print(fib_num)
                return
        i += 1


prime_fib()