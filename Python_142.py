```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            total_sum += lst[i] ** ((i % 3 + 1) * (i % 4 + 1))
    return total_sum