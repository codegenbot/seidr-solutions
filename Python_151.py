def check(func, lst):
    odd_sum = 2 * sum(x**2 for x in lst if x > 0 and x % 2 != 0) if lst else 0
    return func(lst)

def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) if lst else 0

check(double_the_difference, lst) == odd_sum