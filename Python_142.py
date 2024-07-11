```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if num >= 10:
            total_sum += num ** 2
        else:
            total_sum += num ** 3
    return total_sum