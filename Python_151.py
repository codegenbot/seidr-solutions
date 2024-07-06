def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return sum(i for i in lst) - odd_sum * 2