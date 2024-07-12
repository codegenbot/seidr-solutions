```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total += num ** 2
        elif isinstance(num, float) and num > 0:
            total += num ** 2
    return total