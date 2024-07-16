def sum_squares(lst):
    return sum(i ** pow(3, (i // 3) % 4) for i in range(len(lst)))