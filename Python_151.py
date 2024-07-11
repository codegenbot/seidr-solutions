def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    difference = abs(100 - 2*result)
    return difference