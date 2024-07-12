def sum_squares(lst):
    return sum([(x + 1) ** 2 if x >= 0 else (x + 1) ** 2 for x in lst])