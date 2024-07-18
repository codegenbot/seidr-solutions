def double_the_difference(lst):
    odd_sum = sum(x for x in lst if x > 0 and x % 2 != 0)
    return 2 * (sum(x**2 for x in lst if x > 0 and x % 2 != 0)) - odd_sum