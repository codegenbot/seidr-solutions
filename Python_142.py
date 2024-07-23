def sum_squares(lst):
    total_sum = sum(x ** (x % 3 + 1) if x % 4 == 0 else x ** 2 for x in lst)
    return total_sum