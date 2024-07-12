```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num ** 2
        else:
            total += num.upper() ** 3
    return total