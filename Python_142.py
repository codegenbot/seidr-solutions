def sum_squares(lst):
    total_sum = 0
    for i in lst:
        if isinstance(i, int):
            total_sum += (i ** 2) if i % 3 == 0 else (i ** 3)
    return total_sum