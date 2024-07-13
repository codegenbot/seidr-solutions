def double_the_difference(lst):
    return sum(i ** 2 for i in [x for x in lst if isinstance(x, int) and x > 0])