def double_the_difference(lst):
    pos_nums = [i for i in lst if isinstance(i, int) and i > 0]
    return sum(i**2 for i in pos_nums) * 2