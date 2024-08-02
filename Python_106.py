import math
def f(n):
    return [1] + [
        math.factorial(i) if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(2, n + 1)
    ]