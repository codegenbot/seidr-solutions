def is_prime(num):
    if num < 2:
        return False
    if num == 2:
        return True
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


mem = {0: 0, 1: 1}


def fibonacci(num):
    if num in mem:
        return mem[num]
    mem[num] = fibonacci(num - 1) + fibonacci(num - 2)
    return mem[num]


def prime_fib(num):
    fib_num = fibonacci(num)
    return is_prime(fib_num)


def check(func):
    for i in range(0, 11):
        if func(i):
            print(f"{i}: Prime Fibonacci")
        else:
            print(f"{i}: Not a Prime Fibonacci")


check(prime_fib)