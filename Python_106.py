def f(n):
    return [1] + [i if i % 2 != 0 else math.factorial(i) for i in range(2, n + 1)]