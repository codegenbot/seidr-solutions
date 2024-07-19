def sum_squares(lst):
    return sum(x**2 if i % 3 == 0 else x**3 if i % 4 == 0 else x for i, x in enumerate(lst))