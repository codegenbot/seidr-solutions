def double_the_difference(lst):
    lst_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return (sum(lst) - lst_sum) * 2