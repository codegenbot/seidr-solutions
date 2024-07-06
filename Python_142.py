```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            if i % 4 == 0:
                total_sum += lst[i] ** 2
            else:
                total_sum += lst[i] ** 3
        elif i % 4 == 0:
            total_sum += lst[i] ** 1
    return total_sum