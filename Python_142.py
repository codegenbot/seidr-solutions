def sum_squares(lst):
    total_sum = 0
    has_negative = False
    for num in lst:
        if num <= 0:
            has_negative = True
        else:
            total_sum += num ** 2
    return total_sum if not has_negative else 0

print(sum_squares([1, 4, -3, 9, -10]))