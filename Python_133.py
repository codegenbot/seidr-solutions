def sum_squares(lst):
    return sum([(x + 1) ** 2 if x >= 0 else 0 for x in lst if isinstance(x, int)]).