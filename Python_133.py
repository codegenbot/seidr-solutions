def sum_squares(lst):
    return sum([(x + 1) ** 2 for x in lst if x >= 0])