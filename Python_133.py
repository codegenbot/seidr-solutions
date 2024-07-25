def sum_squares(lst):
    return sum((int(x) + (x % 1 > 0))**2 for x in lst)