def sum_squares(lst):
    return sum(i ** (3 if i % 3 == 0 and i % 4 != 0 else 2) for i in lst)