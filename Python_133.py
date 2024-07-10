def sum_squares(lst):
    return sum((int(x) + (1 if x % 1 > 0 else 0))**2 for x in lst)