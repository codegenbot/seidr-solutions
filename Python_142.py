```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num ** 2
        elif isinstance(num, str) and len(num) % 3 == 0:
            total += len(num) ** 2
    return total