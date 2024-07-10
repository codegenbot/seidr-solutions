def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2