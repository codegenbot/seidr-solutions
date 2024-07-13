def sum_squares(lst):
    return sum(i ** i if (i + 1) % 4 == 0 and (i + 1) % 3 != 0 else i for i in lst)