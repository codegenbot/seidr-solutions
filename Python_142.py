def sum_squares(lst):
    total_sum = 0
    for i in lst:
        if isinstance(i, int) and 1 <= i <= 100:
            total_sum += i ** 2
    return total_sum