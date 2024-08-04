def double_the_difference(lst, odd_sum):
    return 2 * sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)