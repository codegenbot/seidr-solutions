def double_the_difference(lst):
    return abs(sum(i for i in lst) - 2 * sum(i for i in lst if isinstance(i, int) and i % 2 != 0))