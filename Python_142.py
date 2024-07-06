def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            total_sum += num**2
    return total_sum


print(sum_squares([1, 2, 3, 4, 5, 6]))