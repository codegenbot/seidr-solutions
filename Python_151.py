def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return 2 * sum(x for x in lst if isinstance(x, int)) - sum(
        i for i in lst if isinstance(i, int)
    )