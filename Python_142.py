```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 and num % 4 != 0):
            total += num ** 2
        elif isinstance(num, float) and (num % 1.0 == 0.0 and num % 0.25 != 0.0):
            total += num ** 2
    return total