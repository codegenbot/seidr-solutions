```
def sum_squares(lst):
    total_sum = 0
    for i, val in enumerate(lst):
        if i % 3 == 0 or i % 4 == 0:
            total_sum += val ** 2
    return total_sum