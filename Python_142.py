def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int):
            total_sum += (num ** 2) if num % 3 == 0 else (num ** 3)
    return total_sum