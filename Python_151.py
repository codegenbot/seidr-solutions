def double_the_difference(lst):
    difference = (max(lst) - min(lst)) / 2
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return abs(difference - odd_sum) * 2