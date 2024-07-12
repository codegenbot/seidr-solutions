```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and abs(num) <= 1000:
            total_sum += num ** 2
    return total_sum