def double_the_difference(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    diff = abs(1 - (2 * odd_sum)) / len([i for i in lst if isinstance(i, int)])
    return round(diff, 4)