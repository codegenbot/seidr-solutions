def double_the_difference(lst):
    return sum(x * x for x in lst if isinstance(x, int) and x >= 0 and x % 2 != 0)