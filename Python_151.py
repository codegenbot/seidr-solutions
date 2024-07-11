def double_the_difference(lst):
    average = sum(i for i in lst) / len(lst)
    return abs(sum(i**2 for i in lst if isinstance(i, int) and i >= 0) - 2 * average * (sum(i for i in lst if isinstance(i, int))))