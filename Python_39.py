mem = {0: 0, 1: 1}

def fibonacci(num):
    if num in mem:
        return mem[num]
    if num <= 1:
        return num
    mem[num] = fibonacci(num - 1) + fibonacci(num - 2)
    return mem[num]

def prime_fib(num):
    if num <= 1:
        return False
    fib_num = fibonacci(num)
    if fib_num <= 1:
        return False
    for i in range(2, int(fib_num ** 0.5) + 1):
        if fib_num % i == 0:
            return False
    return True

def check(func):
    for i in range(0, 11):
        if func(i):
            print(f"{i}: Prime Fibonacci")
        else:
            print(f"{i}: Not a Prime Fibonacci")

check(prime_fib)