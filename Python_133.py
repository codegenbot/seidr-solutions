def sum_squares(lst):
    return sum([int(x) ** 2 for x in map(lambda x: -(-x // 1), lst)])