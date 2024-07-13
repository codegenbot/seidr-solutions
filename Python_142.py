def sum_squares(lst):
    return sum(i ** (i % 3 == 0 and 2 or i % 4 // 3 + 1) for i in range(len(lst)))