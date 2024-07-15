def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    if n == 2:
        return 3

    fib_list = [1, 1]
    while True:
        fib_list.append(fib_list[-1] + fib_list[-2])
        if is_prime(fib_list[-1]) and len(fib_list) == n:
            return fib_list[-1]

n = int(input())
print(prime_fib(n))