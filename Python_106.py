import math

def f(n):
    return [
        1 if i == 0 else math.factorial(i) if i % 2 == 0 else math.factorial(i)
        for i in range(n)
    ]