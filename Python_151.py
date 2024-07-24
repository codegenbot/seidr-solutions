def double_the_difference(lst):
    odd_sum = sum(i ** 2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return sum(i ** 2 for i in lst if isinstance(i, int)) - 2 * odd_sum