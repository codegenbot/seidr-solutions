def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        is_square = False
        if (i % 3, i % 4) in [(1, j) or (2, j) for j in range(4)]:
            is_square = True
        if is_square:
            total_sum += lst[i] ** 2
    return total_sum