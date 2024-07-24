def double_the_difference(lst):
    return abs(
        sum(i for i in lst)
        - 2 * sum(x for x in lst if isinstance(x, int) and x % 2 != 0)
    )