def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    diff = abs(3 - (len([i for i in lst if isinstance(i, int)]) / len(lst)) * odd_sum)
    return 2 * diff