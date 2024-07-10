```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i % 3 == 0 or i % 4 == 0) and (i % 12 != 0 or i % 20 != 0):
            total_sum += lst[i] ** 2
    return total_sum