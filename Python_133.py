def sum_squares(lst):
    return sum(int(i) ** 2 for i in map(round, lst))