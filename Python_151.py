def double_the_difference(lst):
    result = (sum(i for i in lst if isinstance(i, int) and i > 0)) * 2
    return result - max(lst)