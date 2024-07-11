def double_the_difference(odd_sum, lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)