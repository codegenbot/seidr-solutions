def double_the_difference(lst):
    result = sum(i ** 2 for i in lst if isinstance(i, int) and i > 0)
    return result