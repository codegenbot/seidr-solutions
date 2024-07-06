def double_the_difference(lst):
    total = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    return total