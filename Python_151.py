def check(func, lst):
    return func(lst)

odd_sum = sum(x ** 2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)

def double_the_difference(lst):
    return odd_sum * 2

lst = [1, 2, 3, 4, 5]
check(double_the_difference, lst)