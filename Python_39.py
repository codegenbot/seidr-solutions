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
    fib_list = [0, 1]
    while len(fib_list) <= n:
        fib_list.append(fib_list[-1] + fib_list[-2])
    for num in fib_list[2:]:
        if is_prime(num):
            n -= 1
            if n == 0:
                return num