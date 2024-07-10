def double_the_difference(lst):
    expected_sum = sum(i for i in lst if isinstance(i, int) and i >= 0) * 2 - sum(lst)
    return expected_sum