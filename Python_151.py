def double_the_difference(lst):
    pos_int_sum = sum(i for i in lst if isinstance(i, int) and i > 0)
    mean = pos_int_sum / len([i for i in lst if isinstance(i, int) and i > 0])
    return abs(mean - 5) * 2