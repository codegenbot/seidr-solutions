import math

def f(n):
    return [
        1 if i == 0 else (i + 1) * i // 2 if i % 2 else math.factorial(i)
        for i in range(n)
    ]