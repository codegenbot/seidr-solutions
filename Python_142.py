```
def sum_squares(lst):
    total = 0
    for i in lst:
        if isinstance(i, int):
            total += i ** 2
        elif isinstance(i, str) and len(i) > 1:
            total += len(i) ** 3
    return total