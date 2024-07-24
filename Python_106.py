def f(n):
    return [1 if i == 0 else i * f(i - 1) for i in range(1, n + 1)]


# Test the function with the example given in the problem description
print(f(5))