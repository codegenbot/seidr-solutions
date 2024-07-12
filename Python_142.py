```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 or num % 4 == 0):
            total += num ** 2
        elif isinstance(num, float) and (num % 3 == 0.5 or num % 4 == 1.0):
            total += num ** 2
    return total