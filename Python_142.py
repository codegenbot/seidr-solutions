def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 and not num % 4 or not num % 3 and num % 4 == 0):
            total_sum += num ** 2
        elif isinstance(num, float) and (num % 3 == 0 and not num % 4 or not num % 3 and num % 4 == 0):
            total_sum += num ** 3
    return total_sum