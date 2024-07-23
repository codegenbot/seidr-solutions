```
def sum_squares(lst):
    total_sum = 0
    for i, num in enumerate(lst):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            total_sum += ((i % 3 == 0 and i % 4 != 0) and num ** 2) or (i % 4 == 0 and i % 3 != 0 and num ** 3)
    return total_sum