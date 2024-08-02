def double_the_difference(lst1, target):
    return abs(sum(i ** 2 for i in lst1 if isinstance(i, int) and i > 0) - target)