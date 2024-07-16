def check(func, lst):
    return func(lst)

odd_sum = lambda lst: sum(x for x in lst if x % 2 != 0)

def double_the_difference(lst):
    return 2 * sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)