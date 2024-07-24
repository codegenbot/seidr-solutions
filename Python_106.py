import math

def f(n):
    return [
        1 if i == 0 else math.factorial(i) if i % 2 == 0 else f(i-1)[-1] + f(i-2)[-1]
        for i in range(n)
    ]