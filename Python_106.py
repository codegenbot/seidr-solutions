def f(n):
    return 1 if n == 0 else n * f(n - 1)

# Test the function with the example given in the problem description
print(f(5))