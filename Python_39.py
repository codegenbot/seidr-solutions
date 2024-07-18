def is_fibonacci(num):
    return math.isqrt(5 * num * num + 4) ** 2 == 5 * num * num + 4 or math.isqrt(5 * num * num - 4) ** 2 == 5 * num * num - 4

n = int(input())
print(prime_fib(n))