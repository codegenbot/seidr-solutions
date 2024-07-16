def double_the_difference(lst):
    return 2 * sum(x ** 2 for x in lst if isinstance(x, int) and x % 2 != 0)