from math import sqrt

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    def is_fibonacci(num):
        return sqrt(5 * num * num + 4).is_integer() or sqrt(5 * num * num - 4).is_integer()

    fib_nums = [0, 1]
    while fib_nums[-1] < n:
        fib_nums.append(fib_nums[-1] + fib_nums[-2])

    prime_fib_nums = [num for num in fib_nums[:-1] if is_prime(num)]
    return prime_fib_nums

n = int(input())
result = prime_fib(n)
print(result)