def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            total_sum += num**2
        else:
            break
    return total_sum