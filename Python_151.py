def check(func, lst):
    return func(lst)

def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2 if lst else 0

check(double_the_difference, lst) == odd_sum