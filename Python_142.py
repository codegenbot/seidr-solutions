def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int):
            total_sum += num**2
        elif isinstance(num, str):
            total_sum += len(num) ** 2
    return total_sum