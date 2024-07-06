def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            total_sum += lst[i] ** (i % 4 + 2)
    return total_sum