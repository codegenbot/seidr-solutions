def double_the_difference(list):
    return sum(x**2 for x in list if x > 0 and isinstance(x, int) and x % 2 != 0)