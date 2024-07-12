```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and 1 <= num <= 100:
            total_sum += num ** 2
        elif isinstance(num, str) and len(num) > 1:
            total_sum += len(num) ** 2
    return total_sum