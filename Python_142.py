def sum_squares(lst):
    return sum(val ** len(str(i)) % 6 for i, val in enumerate(lst))