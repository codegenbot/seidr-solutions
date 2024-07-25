def double_the_difference(lst):
    return sum(i**2 for i in lst if i > 0 and isinstance(i, int) and i % 2 != 0) * 2 if lst else 0