def double_the_difference(lst):
    pos_ints = [i ** 2 for i in lst if isinstance(i, int) and i > 0]
    return sum(pos_ints) * 2