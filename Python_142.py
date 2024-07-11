def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, list):
            total_sum += sum_squares(num)
        elif isinstance(num, int):
            total_sum += num**2
    return total_sum