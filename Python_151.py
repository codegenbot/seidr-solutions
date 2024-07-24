def check(func, *args):
    return func(*args)

print(check(lambda x: abs(x[0] - x[-1]), [1, 5, 3, 19, 18, 25]))