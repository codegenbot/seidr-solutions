def double_the_difference(lst):
    total_sum = sum(lst)
    odd_sum = sum(x for x in lst if isinstance(x, int) and x % 2 != 0)
    return abs(total_sum - 2 * odd_sum)