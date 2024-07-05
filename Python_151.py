def double_the_difference(list):
    return sum(x**2 for x in list if isinstance(x, int) and x > 0 and x % 2 != 0)