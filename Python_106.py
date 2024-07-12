def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

def f(n):
    return [
        1 if i == 1 else factorial(i) if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(1, n + 1)
    ]