def double_the_difference(lst):
    avg_all = sum(lst) / len(lst)
    avg_even = sum(i for i in lst if isinstance(i, int) and i % 2 == 0) / (sum(1 for i in lst if isinstance(i, int) and i % 2 == 0) or 1)
    return abs(avg_all - avg_even) * 2