def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    if n == 1:
        return 0
    fib_list = [0, 1]
    while True:
        next_fib = fib_list[-1] + fib_list[-2]
        if is_prime(next_fib):
            n -= 1
        if n == 0:
            return next_fib
        fib_list.append(next_fib)

n = int(input("Enter the value of 'n': "))
result = prime_fib(n)
print(result)