def double_the_difference(lst):
    diff = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return abs(45 - 2 * diff) // 3