def double_the_difference(lst):
    return 2 * sum(i**2 for i in lst if isinstance(i, int) and i > 0)