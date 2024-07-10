def check(func, *args):
    result = func(*args)
    print(result)

check(double_the_difference, [1, 2, -3])