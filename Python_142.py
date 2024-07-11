def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if num >= 0:
            total_sum += num ** 2
    return total_sum


print(sum_squares([1, 4, -3, 9, -10]))