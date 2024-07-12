def sum_squares(lst):
    return sum([(abs(x) ** 2) for x in lst if x >= 0])