def double_the_difference(l):
    return sum(x**2 for x in l if isinstance(x, int) and x > 0 and x % 2 != 0)