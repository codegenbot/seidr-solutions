```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i % 3) + (i % 4) in [1, 2]:
            total_sum += lst[i] ** ((i % 3 == 0) * 2 or 1)
    return total_sum