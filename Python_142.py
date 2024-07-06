def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if len(str(num)) % 3 == 0:
            total_sum += num ** 2
        elif len(str(num)) % 4 == 0:
            total_sum += num ** 3
    return total_sum

print(sum_squares([1, 2, 3, 4, 5, 6]))