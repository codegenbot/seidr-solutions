def sum_squares(lst):
    return sum(num ** (3 if i % 12 == 0 else 4 if i % 4 == 0 and i % 3 != 0 else 1) for num in lst)