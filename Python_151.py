def difference_double(lst):
    pos_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    neg_sum = sum(i for i in lst if isinstance(i, int) and i < 0)
    return abs(pos_sum - neg_sum) * 2