def fibonacci(n):
    if n <= 1:
        return n
    a, b = 0, 1
    for _ in range(2, n):
        a, b = b, a + b
    return b

def prime_fib(n):
    nth_fib = fibonacci(n)
    return is_prime(nth_fib)

n = int(input())
print(prime_fib(n))