def double_the_difference(lst, odd_sum):
    odd_sum = sum(x**2 for x in lst if x > 0 and x % 2 != 0)
    return 2 * odd_sum    