def double_the_difference(lst):
    lst = [x for x in lst if isinstance(x, int)]
    return sum((2*x) for x in lst if x > 0 and x % 2 != 0)