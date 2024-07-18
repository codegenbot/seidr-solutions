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
    fib_nums = [1, 1]
    while len(fib_nums) < n:
        fib_nums.append(fib_nums[-1] + fib_nums[-2])
    for num in fib_nums:
        if is_prime(num):
            n -= 1
            if n == 0:
                return num