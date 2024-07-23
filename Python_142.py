```
def sum_squares(lst):
    total_sum = sum(x*x if (i % 3 == 0 and i % 4 != 0) else x**3 if (i % 4 == 0 and i % 3 != 0) else x for i, x in enumerate(lst))
    return total_sum