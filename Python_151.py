def double_the_difference(lst):
    pos_ints = [i for i in lst if isinstance(i, int) and i > 0]
    diff = sum(pos_ints) - (abs(min(pos_ints)) + abs(max(pos_ints)))
    return 2 * diff