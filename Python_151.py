def difference(lst):
    odd_sum = sum(i ** 2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return 2 * (max(lst) - min(lst)) - odd_sum