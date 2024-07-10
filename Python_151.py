def double_the_difference(lst):
    min_val = min(i for i in lst if isinstance(i, int) and i > 0)
    max_val = max(i for i in lst if isinstance(i, int) and i > 0)
    return (min_val + max_val) * 2