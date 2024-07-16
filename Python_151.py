def check(func, lst):
    return func(lst)

odd_sum = lambda lst: sum(x ** 2 for x in lst if x > 0 and x % 2 != 0) * 2