def check(func, lst):
    return func(lst) * 2

odd_sum = sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)