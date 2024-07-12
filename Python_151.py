def double_the_difference(lst):
    return sum(x*x for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)