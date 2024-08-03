def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 or num % 4 == 0):
            total_sum += num**2
        elif isinstance(num, float) and (num % 3.0 == 0.0 or num % 4.0 == 0.0):
            total_sum += num**2
    return total_sum