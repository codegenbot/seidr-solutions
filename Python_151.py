def double_the_difference(lst):
    lst = [x for x in lst if isinstance(x, int)]
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0) * 2 if lst else 0