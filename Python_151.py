def double_the_difference(lst):
    odd_sum = (sum(i for i in lst if i % 2 != 0) - 1) * 2
    return abs(sum(i**2 for i in lst if isinstance(i, int) and i > 0) - odd_sum)