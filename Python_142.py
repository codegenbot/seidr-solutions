def sum_squares(lst):
    total_sum = 0
    for i in lst:
        if isinstance(i, int) and (i % 3 == 0 and i % 4 != 0):
            total_sum += i ** 2
        elif isinstance(i, float) and (i % 4 == 0 and i % 3 != 0):
            total_sum += i ** 3
    return total_sum