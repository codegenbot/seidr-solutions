n = int(input("Enter the value of n: "))

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
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
                return fib_num
        i += 1