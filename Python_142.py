def sum_squares(lst):
    total_sum = 0
    for num in lst:
        total_sum += num ** (num % 2 + 1)
    return total_sum