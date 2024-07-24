def f(n):
    return 1 if n == 0 else n * f(n - 1)

print(f(int(input())))