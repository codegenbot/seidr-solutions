def double_the_difference(lst):
    return sum(
        x**2 for x in [y**2 for y in lst if isinstance(y, int) and y >= 0]
    ) / sum(x for x in lst if isinstance(x, int))