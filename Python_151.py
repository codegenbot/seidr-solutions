def double_the_difference(lst):
    min_num = min(i for i in lst if isinstance(i, int) and i > 0)
    max_num = max(i for i in lst if isinstance(i, int) and i > 0)
    return (min_num + max_num) * 2

check(double_the_difference([1, 2, 3]))